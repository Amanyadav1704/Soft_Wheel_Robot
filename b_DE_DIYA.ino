void setup()   
  {   
  pinMode(11,OUTPUT); // RELAY PIN   
  
  pinMode(12,OUTPUT); // RELAY PIN   
  
  pinMode(13,OUTPUT); // RELAY PIN   
  // digitalWrite(11,HIGH);
  // digitalWrite(12,LOW);
  // digitalWrite(13,LOW);
  
  }   
  void loop()    
  {   
  // digitalWrite(11,LOW); // RELAY ON  
  delay(1600);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  digitalWrite(11,HIGH); // RELAY OFF   
  delay(200);
  digitalWrite(11,LOW);
  delay(4000);
  digitalWrite(12,HIGH); // RELAY OF9F   
  delay(200);
  digitalWrite(12,LOW);
  delay(4000);
 
  // delay(1500);
  }   