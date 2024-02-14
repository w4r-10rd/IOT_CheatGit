int buzzer = 8;
int LED = 7;
int flame_sensor = 4;
int flame_detected;
 void setup()
 {
   pinMode(buzzer, OUTPUT);
   pinMode(LED, OUTPUT);
   pinMode(flame_sensor, INPUT);
 }
 void loop()
 {
   flame_detected = digitalRead(flame_sensor);
   if(flame_detected == 1) //or HIGH
   {
     digitalWrite(buzzer, HIGH);
     digitalWrite(LED, HIGH);
     delay(200);
     digitalWrite(LED, LOW);
     delay(200);
   }
   else
   {
     digitalWrite(buzzer, LOW);
     digitalWrite(LED, LOW);
   }
   delay(1000);
 }