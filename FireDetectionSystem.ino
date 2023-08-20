const int buzzerpin=9;
const int firesensorpin=8;
const int ledpin=13;
void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(buzzerpin,OUTPUT);
    pinMode(firesensorpin,INPUT);
    pinMode(ledpin,OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  int firevalue=digitalRead(firesensorpin);
  Serial.println(firevalue);
  if(firevalue==0){
    digitalWrite(buzzerpin,HIGH);
    digitalWrite(ledpin,HIGH);
    delay(5000);

  }
  else{
    digitalWrite(buzzerpin,LOW);
    digitalWrite(ledpin,LOW);          
  }
  delay(500);
}
