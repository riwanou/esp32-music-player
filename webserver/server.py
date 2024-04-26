from http.server import BaseHTTPRequestHandler
from mimetypes import guess_type
from client_mqtt import mqttc
import state
import os
import json


class Server(BaseHTTPRequestHandler):
    def do_GET(self):
        if self.path.startswith("/api"):
            self.handle_api_get()
        else:
            self.handle_static()

    def do_POST(self):
        data = self.read_json()
        if "value" not in data:
            self.handle_http(400, "text/html")
            return

        match self.path:
            case "/api/oled-send":
                mqttc.publish("oled", data.get("value"))
                self.handle_http(200, "text/html")
            case "/api/player-set":
                mqttc.publish("player:set", data.get("value"))
                self.handle_http(200, "text/html")
            case "/api/player-pause":
                if data.get("value"):
                    mqttc.publish("player:stop", 0)
                else:
                    mqttc.publish("player:play", 0)
                self.handle_http(200, "text/html")
            case _:
                self.handle_http(404, "text/html")

    def handle_api_get(self):
        match self.path:
            case "/api/button-status":
                self.send_json({"value": state.button})
            case "/api/current-song":
                self.send_json({"value": state.player_music})
            case "/api/is-paused":
                self.send_json({"value": state.player_paused})
            case _:
                self.handle_http(404, "text/html")

    def handle_static(self):
        if self.path == "/":
            file_path = "static/index.html"
        else:
            file_path = "static" + self.path

        if os.path.exists(file_path):
            mime_type, _ = guess_type(file_path)
            if mime_type == None:
                mime_type = "application/octet-stream"
            self.handle_http(200, mime_type)
            with open(file_path, "rb") as file:
                self.wfile.write(file.read())
        else:
            self.handle_http(404, "text/html")

    def handle_http(self, status: int, content_type: str):
        self.send_response(status)
        self.send_header("Content-type", content_type)
        self.end_headers()

    def send_json(self, data: dict):
        self.handle_http(200, "text/json")
        self.wfile.write(bytes(json.dumps(data), "UTF-8"))

    def read_json(self) -> dict:
        content_len = int(self.headers["Content-Length"])
        data_string = self.rfile.read(content_len)
        return json.loads(data_string)


BaseHTTPRequestHandler.log_message = lambda *args: None
