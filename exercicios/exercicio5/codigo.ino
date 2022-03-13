int var1;
  
void setup()
{
  pinMode(1,INPUT);
  pinMode(2,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  var1 = digitalRead(1);
  if(var1){
  digitalWrite(2,LOW);
  }else{
  digitalWrite(2,HIGH);
  }
  
}
