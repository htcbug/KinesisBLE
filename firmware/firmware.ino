#include "config.h"
#include "Keyboard.h"

Keyboard keyboard;
LED led;

void setup(void) {
//  Serial.begin(115200);
//  while ( !Serial ) delay(10);   // for nrf52840 with native usb

  keyboard.begin();
}

void loop(void) {  
  keyboard.update();
  // sleep to save power
  delay(10);
}
