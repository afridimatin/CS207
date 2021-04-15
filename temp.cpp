//temp.cpp
//This program controls the temp sensor & alarm.

int value_zero = 0;
int temp_pin = A1;
int temp_cov = 40;

void setup() {
Serial.begin(9600);
pinMode(13, OUTPUT); 


}

void loop() {

int temp_value = analogRead(temp_pin);
temp_value = Serial.println(temp_value);
delay(50);
do{
  
  delay(50);
  digitalWrite(13, HIGH);
  delay(100);
  
      }while(temp_value > temp_cov);
      digitalWrite(13, LOW);
} 
