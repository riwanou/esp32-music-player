import logging
import paho.mqtt.client as mqtt
import state


def on_connect(client: mqtt.Client, data, flags, reason_code):
    print(f"Connected with result code {reason_code}")
    client.subscribe("counter")
    client.subscribe("pbut")
    client.subscribe("player:play")
    client.subscribe("player:stop")
    client.subscribe("player:set")


def on_message(client: mqtt.Client, data, msg: mqtt.MQTTMessage):
    # button status
    if msg.topic == "pbut":
        state.button = msg.payload.decode("utf-8")

    # music player
    if msg.topic == "player:stop":
        state.player_paused = True
    if msg.topic == "player:play":
        state.player_paused = False
    if msg.topic == "player:set":
        state.player_music = msg.payload[0] - ord("0")


logging.basicConfig(level=logging.ERROR)

mqttc = mqtt.Client()
# mqttc.enable_logger()

mqttc.on_connect = on_connect
mqttc.on_message = on_message
