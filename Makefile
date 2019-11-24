ESP_ROOT=$(HOME)/git/esp8266
ESPTOOL=$(ESP_ROOT)/tools/esptool/esptool.py
BOARD=nodemcuv2
LIBS=ESP8266WiFi ESP8266WebServer

include $(HOME)/git/makeEspArduino/makeEspArduino.mk
