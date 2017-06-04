/*
  Configuration Panel
  AFE Firmware for smart home devices build on ESP8266
  More info: https://github.com/tschaban/AFE-Firmware
  LICENCE: http://opensource.org/licenses/MIT
*/

#ifndef _AFE_Configuration_Panel_h
#define _AFE_Configuration_Panel_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#include <AFE-Web-Sites-Generator.h>

#include <Streaming.h>

class AFEConfigurationPanel {

private:
  AFEWebSites Site;

public:
	/* Constructor: entry parameter is GPIO number where Sensor is connected to */
	AFEConfigurationPanel();
  String generateMainSite();


};

#endif