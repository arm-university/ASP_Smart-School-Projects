// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>


const char THING_ID[] = "8d2ac32e-ae1a-4a77-9251-aee1887dcc15";

const char SSID[]     = SECRET_SSID;    // Network SSID (name)
const char PASS[]     = SECRET_PASS;    // Network password (use for WPA, or use as key for WEP)

void onTemperatureChange();
void onHumidityChange();
void onIlluminanceChange();
void onPressureChange();
void onUvaChange();
void onUvbChange();
void onUvindexChange();
void onLEDSwitch1Change();

float temperature;
float humidity;
float illuminance;
float pressure;
float uva;
float uvb;
float uvindex;
bool lEDSwitch1;

void initProperties(){

  ArduinoCloud.setThingId(THING_ID);
  ArduinoCloud.addProperty(temperature, READWRITE, ON_CHANGE, onTemperatureChange);
  ArduinoCloud.addProperty(humidity, READWRITE, ON_CHANGE, onHumidityChange);
  ArduinoCloud.addProperty(illuminance, READWRITE, ON_CHANGE, onIlluminanceChange);
  ArduinoCloud.addProperty(pressure, READWRITE, ON_CHANGE, onPressureChange);
  ArduinoCloud.addProperty(uva, READWRITE, ON_CHANGE, onUvaChange);
  ArduinoCloud.addProperty(uvb, READWRITE, ON_CHANGE, onUvbChange);
  ArduinoCloud.addProperty(uvindex, READWRITE, ON_CHANGE, onUvindexChange);
  ArduinoCloud.addProperty(lEDSwitch1, READWRITE, ON_CHANGE, onLEDSwitch1Change);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
