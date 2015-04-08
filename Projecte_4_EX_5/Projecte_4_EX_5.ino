/*************************************************************************
**                                                                      **
** Programa que tria l'opció depenent del valor de la variable          **
**                      i els casos                                     **
**                                                                      **
**                                                                      **
*************************************************************************/
//Raúl Martos

int sensorReading = 3;
void setup()
{
  Serial.begin(9600);
  Serial.print("The day is "); 
   
  switch (sensorReading) {
  case 0:    
    Serial.println("dark");
    break;
  case 1:    
    Serial.println("dim");
    break;
  case 2:    
    Serial.println("medium");
    break;
  case 3:
    Serial.println("bright");
    break;
  default:
    Serial.println("... I don't know!!!");
  } 
}
void loop()
{
}

// aquest programa el que fa es triar un cas o un altre depenent del valor que posem a la variable. Si posem "variable" = 2 triara el case 2:
