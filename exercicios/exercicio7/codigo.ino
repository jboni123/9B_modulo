int var1;
int var2;
int var3;
int var4;
int var5;
int var6;
int var7;
  
void setup()
{
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  Serial.begin(9600);
}

void loop()
{
  var1 = digitalRead(1);
  var2 = digitalRead(2);
  var3 = digitalRead(3);
  var4 = digitalRead(4);
  var5 = digitalRead(5);
  var6 = digitalRead(6);
  var7 = digitalRead(7);
  
  if(var1){
  Serial.println("do");
  }
  if(var2){
  Serial.println("ré");
  }
  if(var3){
  Serial.println("mi");
  }
  if(var4){
  Serial.println("fa");
  }
  if(var5){
  Serial.println("sol");
  }
  if(var6){
  Serial.println("la");
  }
  if(var7){
  Serial.println("si");
  }
  delay(10);
}
