#include <ArduinoTap.h>

void setup() {
#ifdef ARDUINO
  Serial.begin(9600);
#endif
}

void loop() {
  plan(2);
  fail();
  fail("foo");
  done_testing();
}


