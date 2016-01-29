

void setup()
{
  
  Serial.begin(9600);
 
}

void loop()
{

  float beginning{0.0000000001};
  
  float ending{10000000000};

  float multiplier{1.01};
  
  for (float current{beginning}; current <= ending; current *= multiplier)
  {

    Serial.println(current);

    delay(100);

  }
  
}
