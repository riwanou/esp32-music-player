import time
from http.server import HTTPServer
from server import Server
from client_mqtt import mqttc

HOSTNAME = "localhost"
PORT_NUMBER = 8000
MQTT_HOSTNAME = "pi.local"
MQTT_PORT_NUMBER = 1883

mqttc.connect(MQTT_HOSTNAME, MQTT_PORT_NUMBER, properties=None)
mqttc.loop_start()

httpd = HTTPServer((HOSTNAME, PORT_NUMBER), Server)
print(time.asctime(), "server running on %s:%s" % (HOSTNAME, PORT_NUMBER))
httpd.serve_forever()

mqttc.loop_stop()
