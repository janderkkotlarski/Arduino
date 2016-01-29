

void setup()
{
  
  Serial.begin(9600);
 
}

void loop()
{

  int maximum{255};

  for (int count_1{0}; count_1 < maximum; ++count_1)
  {
        
    Serial.println(count_1);
        
  }
  
  delay(100);

}
