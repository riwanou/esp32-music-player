import paho.mqtt.client as mqtt
import time

MQTT_HOST_NAME = "pi.local"
MQTT_PORT_NUMBER = 1883

mqttc = mqtt.Client()
mqttc.connect(MQTT_HOST_NAME, MQTT_PORT_NUMBER)

mqttc.loop_start()

mqttc.publish("oled", "msg: 10")
mqttc.publish("player:play", 0)
time.sleep(2)
mqttc.publish("player:stop", 0)

mqttc.loop_stop()
