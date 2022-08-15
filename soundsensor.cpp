const int sensorpin = A0; //here I have connected sensor to arduino's A0 pin but you can connect it to any Analog or Digital pin
void setup() 
{
  Serial.begin(9600);
  pinMode(sensorpin, INPUT);
}

void loop() 
{
  Serial.println(digitalRead(sensorpin));
}
