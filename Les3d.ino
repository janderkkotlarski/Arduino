

void setup()
{
  
  Serial.begin(9600);
 
}

void loop()
{

  int maximum_1{255};

  int maximum_2{127};

  int maximum_3{63};

  for (int count_1{0}; count_1 < maximum_1; ++count_1)
  {

    for (int count_2{0}; count_2 < maximum_2; ++count_2)
    {

      for (int count_3{0}; count_3 < maximum_3; ++count_3)
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
