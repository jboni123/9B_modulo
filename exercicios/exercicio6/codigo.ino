int var1;
int var2;
int var3;
int var4;
int var5;
  
void setup()
{
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  Serial.begin(9600);
}

void loop()
{
  var1 = digitalRead(1);
  var2 = digitalRead(2);
  var3 = digitalRead(3);
  var4 = digitalRead(4);
  var5 = digitalRead(5);
  
  if(var1){
  Serial.println("a");
  }
  if(var2){
  Serial.println("aa");
  }
  if(var3){
  Serial.println("aaa");
  }
  if(var4){
  Serial.println("aaaa");
  }
  if(var5){
  Serial.println("aaaaa");
  }
  delay(10);
}
