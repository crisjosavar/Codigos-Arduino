
int i=5;

vois setuo() {
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT)
  pinMode(7,OUTPUT)
  pinMode(8,OUTPUT)
  pinMode(9,OUTPUT)
  pinMode(10,OUTPUT)
  pinMode(11,OUTPUT)
  
}
void loop() {
  for(i=5; i<=11; i++){
  digitalWrite(i,HIGH);
  digitalWrite(i-1,LOW);
  delay(500);
  } 

}
