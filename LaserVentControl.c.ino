#include <P1AM.h>

void setup() {
  // put your setup code here, to run once:
  uint8_t numModules = P1.init();
  P1.writeDiscrete(HIGH,2,6);
  delay(1000);
  P1.writeDiscrete(HIGH,2,2);
  delay(10000);
  P1.writeDiscrete(LOW,2,2);
  delay(2000);
  P1.writeDiscrete(HIGH,2,3);
  delay(10000);
  P1.writeDiscrete(LOW,2,3);
  delay(2000);
  P1.writeDiscrete(HIGH,2,4);
  delay(10000);
  P1.writeDiscrete(LOW,2,4);
  delay(2000);
  P1.writeDiscrete(LOW,2,6);
}

void loop() {
  // put your main code here, to run repeatedly:
  uint8_t lasersOn = P1.readDiscrete(1);
  if(lasersOn) {
    uint8_t dampersOn = (lasersOn<<1) | (0x1<<5);
    P1.writeDiscrete(dampersOn, 2);
  } else {
    P1.writeDiscrete(0, 2);
  }
}
