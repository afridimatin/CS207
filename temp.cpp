// This program controls the temp sensor & alarm.
// A1 will be used for Temperature sensor.
// PIN 2 will be used for speaker.

int value_zero = 0;
int temp_pin = A1;
int temp_cov = 40;
int spk_pin = 2;
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
  tone(spk_pin, 2000, 70);
  delay(100);
  tone(spk_pin, 1000, 70);
      }while(temp_value > temp_cov);
      digitalWrite(13, LOW);
} 
