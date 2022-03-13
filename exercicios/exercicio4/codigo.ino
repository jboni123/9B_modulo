void setup()
{
  pinMode(1,INPUT);
  pinMode(2,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  bool botao = digitalRead(1);
  digitalWrite(2,botao);
  delay(10);
  Serial.println(botao);
}
