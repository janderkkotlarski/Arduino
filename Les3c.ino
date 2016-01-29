

void setup()
{
  
  Serial.begin(9600);
 
}

void loop()
{

  int maximum{255};

  for (int count_1{0}; count_1 < maximum; ++count_1)
  {

    for (int count_2{0}; count_2 < maximum; ++count_2)
    {

      for (int count_3{0}; count_3 < maximum; ++count_3)
      {
        
        Serial.print(count_1);
  
        Serial.print(":");
  
        Serial.print(count_2);

        Serial.print(":");
  
        Serial.println(count_3);
  
        delay(100);

      }


    }
        
  }
  
  
}
