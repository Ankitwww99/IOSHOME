
const int sensor_pin = A0;  /* Connect Soil moisture analog sensor pin to A0 of NodeMCU */
//const int led_pin = D1;

void setup() {
  Serial.begin(9600); /* Define baud rate for serial communication */
  //pinMode(led_pin,OUTPUT);
}

void loop() {
  float moisture_percentage;

  moisture_percentage = ( 100.00 - ( (analogRead(sensor_pin)/1023.00) * 100.00 ) );
  
  Serial.print("Soil Moisture(in Percentage) = ");
  Serial.print(moisture_percentage);
  Serial.println("%");
  if(moisture_percentage<10){
     digitalWrite(led_pin,HIGH);
     delay(1000);
     digitalWrite(led_pin,LOW);
    }
  
  delay(1000);
}
