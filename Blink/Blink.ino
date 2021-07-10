void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  for(int i=1; i<6; i++){ //first quick blink for 5 times
    digitalWrite(13, HIGH);   
    delay(500);                   
    digitalWrite(13, LOW);    
    delay(500); 
    }     
  for(int i=1; i<6; i++){ //then slow blink for 5 times
    digitalWrite(13, HIGH);   
    delay(2000);                   
    digitalWrite(13, LOW);    
    delay(2000); 
    }      
}
