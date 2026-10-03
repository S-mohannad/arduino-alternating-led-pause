void setup() {
pinMode (13, OUTPUT);
pinMode (12, OUTPUT);
}

void loop() {
for(int i=0;i<10;i++){
digitalWrite(13, HIGH);
digitalWrite(12,0); 
delay(250);
digitalWrite(13, LOW);
digitalWrite(12,1);
delay(250);
}
digitalWrite(12, LOW);
delay(5000);
}