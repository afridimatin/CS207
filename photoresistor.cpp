#include "C1.cpp"
int white_led_Value = 0; // value of output
int white_Input = 19; // value of when light is on
int photoResistor = 0;

void setup() {  
Serial.begin(9600);
pinMode(8, OUTPUT); 
}

void loop() {  
int value = analogRead(photoResistor);  
Serial.println(white_led_Value);  
delay(250);
if (white_led_Value < white_Input) // if sensor value is less than 19, light will turn on.
{ digitalWrite(8, HIGH);//LED on } else { digitalWrite(8, LOW);// LED off }
}
}
