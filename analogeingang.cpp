#include <Arduino.h>

double inputVal  = 0;

void setup() {
  pinMode(A0, INPUT);
  Serial.begin(115200); 
}

void loop() {  // Division mit float beachten: 242.0 statt 242
 inputVal = analogRead (A0)/242.0; // Analog Values 0 to 1024
  Serial.println (inputVal,2);
  //analogWrite(LED, inputVal/4);      // Mapping 0 to 255
  delay(1000);
}