#include <Arduino.h>

#define LED1 12

void setup() {
	pinMode(LED1, OUTPUT);
  Serial.begin(9600);
}

void loop() {
	digitalWrite(LED1, HIGH);
  Serial.println("LED: HIGH");
	delay(100);
	digitalWrite(LED1, LOW);
  Serial.println("LED: LOW");
	delay(100);	
}