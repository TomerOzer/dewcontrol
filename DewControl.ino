#include "clicli.h"
#include "hvacontrol.h"

hvacontrol hvac(
5, //encoder A
6, //encoder B
3); //valve control
//Notes:
//Button on pin 2
//ValveStatus=A0, WaterTempPin=A1, RHPin=A2, AirTempPin=A3
//10(CS), 11(COPI), 12(CIPO), 13(SCK)

clicli mycli(hvac); //setup clicli tool for hvac control

void setup() { 
  hvac.begin(115200);
}

void loop() { 
  mycli.run();
  hvac.selftest();

}