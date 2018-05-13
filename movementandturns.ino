// YL: the code below is modified from https://github.com/pvcraven/zumo_32u4_examples/blob/master/GyroSensorExample/GyroSensorExample.ino
// YL: a damn lot of libraries
#include <Wire.h>
#include <Pushbutton.h>
#include <Zumo32U4ProximitySensors.h>
#include <Zumo32U4Encoders.h>
#include <Zumo32U4IRPulses.h>
#include <PololuBuzzer.h>
#include <FastGPIO.h>
#include <Zumo32U4Motors.h>
#include <LSM303.h>
#include <Zumo32U4.h>
#include <Zumo32U4LCD.h>
#include <TurnSensor.h>
#include <Zumo32U4LineSensors.h>
#include <PololuHD44780.h>
#include <USBPause.h>
#include <Zumo32U4Buttons.h>
#include <L3G.h>
#include <Zumo32U4Buzzer.h>
#include <QTRSensors.h>

L3G gyro;
Zumo32U4LCD lcd;

// "--- Helper functions"
int32_t getAngle() {
  // "turnAngle is a variable defined in TurnSensor.cpp"
  // "This fancy math converts the number into degrees turned since the
  // last sensor reset."
  return (((int32_t)turnAngle >> 16) * 360) >> 16;
}

// --- Setup Method
void setup() {
  turnSensorSetup();
  delay(500);
  turnSensorReset();
  lcd.clear();
}

void loop() {
  
  // Read the sensors
  turnSensorUpdate();
  int32_t angle = getAngle();
}




