int sensorPin = A0;  
int sensorValor = 0; 
void setup() {
  Serial.begin(9600); 
}

void loop() {
  sensorValor = analogRead(sensorPin); 
  Serial.print("Valor do sensor MQ-7: ");
  Serial.println(sensorValor);  

  delay(1000);  
}
