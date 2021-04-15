#include "C1.cpp"

void setup() {  
Serial.begin(9600);
}

void loop() {  
int value = analogRead(A0);  
  
Serial.println("Analog Value :");
Serial.println(value);  
delay(250);
}
