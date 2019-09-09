void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  //All High
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  //All Low
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  //13 High
  digitalWrite(13, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  
  //13 Low, 12 High
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  
  //12 Low, 11 High
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  
  //11 Low
  digitalWrite(11, LOW);
  delay(500); // Wait for 500 millisecond(s)
}