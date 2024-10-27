
 int potPin = A0;
 float voltage=0.0;

  
 void setup() {
  Serial.begin(9600);
 }
  void loop () {
   int sensor =analogRead(potpin);
  voltage = sensor* (5.0/1023.0);
   
  Serial.print("voltage:");
  Serial.print(voltage);
  Serial.print("V");
     delay(10);
}