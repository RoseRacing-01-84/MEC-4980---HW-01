#include <Arduino.h>

void setup() {
  pinMode(10, INPUT);
  pinMode(9, INPUT);
  pinMode(6, INPUT);
  pinMode(5, INPUT);
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  Serial.begin(115200);
}

void loop() {
if (digitalRead(10) == HIGH) {
  digitalWrite(A3, LOW);
  digitalWrite(A0, HIGH);
  delay(100);
unsigned long start = millis();
while (millis() - start < 3000) {
if (digitalRead(10) == HIGH) {
  digitalWrite(A0, LOW);
}
}}
digitalWrite(A0,LOW);
if(digitalRead(9) == HIGH){
digitalWrite(A1, HIGH);
}
if(digitalRead(6) == HIGH){
  digitalWrite(A1,LOW);
  for (int i = 0; i < 5; i++) {
    digitalWrite(A2, HIGH);
    delay(500);
    digitalWrite(A2, LOW);
    delay(500);
  }
  digitalWrite(A3, HIGH);
}
if(digitalRead(5) == HIGH){
  digitalWrite(A3, LOW);
}
}