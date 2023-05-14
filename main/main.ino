#define rele 13
#define umid A0


void setup() {
  pinMode(rele, OUTPUT);
  pinMode(umid,INPUT);
  Serial.begin(9600);
  digitalWrite(rele,LOW);
  
  
}

void loop() {
  Serial.println("Analogico:");
  Serial.println(analogRead(umid));
  Serial.println("  ");
  delay(1000);

  if(analogRead(umid) > 700){
    digitalWrite(rele,HIGH);
    delay(120000);
  }else{
    digitalWrite(rele,LOW);
    delay(360000);
  }
  
  
}
