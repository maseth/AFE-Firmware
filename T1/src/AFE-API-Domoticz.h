/* AFE Firmware for smart home devices
  LICENSE: https://github.com/tschaban/AFE-Firmware/blob/master/LICENSE
  DOC: http://smart-house.adrian.czabanowski.com/afe-firmware-pl/ */

#ifndef _AFE_Domoticz_API_h
#define _AFE_Domoticz_API_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif

#include <AFE-Data-Access.h>
#include <ESP8266HTTPClient.h>
#include <rBase64.h>
// #include <Streaming.h>

class AFEDomoticz {

private:
  AFEDataAccess Data;
  HTTPClient http;
  char serverURL[184];
  boolean initialized = false;

  const String getApiCall(const char *param, unsigned long idx);
  void callURL(const String url);

public:
  DOMOTICZ configuration;

  AFEDomoticz();
  void begin();
  void disconnect();
  void sendSwitchCommand(unsigned long idx, const char *value);
};

#endif
