// This program controls the temp sensor, photoresistor, motors, alarm.
// A1 will be used for Temperature sensor.
// A0 will be used for Photoresistor.
// PIN 2 will be used for speaker.
// PIN 9 will be used for front fan
// PIN 12 will be used for Wheels.

const int fan_pin = 9;
const int motor_wheels_pin = 12;
int value_zero = 0;
int temp_pin = A1;
int temp_cov = 40;
int spk_pin = 2;
int white_led_Value = 0; // value of output
int white_Input = 1020; // value of when light is on
int photoResistor = A0;


void setup() {
Serial.begin(9600);
pinMode(13, OUTPUT);
pinMode(8, OUTPUT); 
pinMode(fan_pin, OUTPUT); 
pinMode(motor_wheels_pin, OUTPUT); 

}

void loop() {
int value = analogRead(photoResistor); 
Serial.println(value - 20);
delay(150);
if (white_led_Value < white_Input) // if sensor value is less than 300, light will turn on.
{ digitalWrite(8, HIGH); }  else digitalWrite(8, LOW);  
int temp_value = analogRead(temp_pin);

temp_value = Serial.println(temp_value);
delay(50);
do{
  digitalWrite(motor_wheels_pin, HIGH);
  digitalWrite(fan_pin, 140);
  delay(50);
  digitalWrite(13, HIGH);
  delay(100);
  tone(spk_pin, 1000, 100);
  delay(100);
  tone(spk_pin, 2000, 70);
      }while(temp_value > temp_cov);
      digitalWrite(13, LOW);
} 
