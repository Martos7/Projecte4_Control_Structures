/*************************************************************************
**                                                                      **
** Programa que escriu un comentari "si" supera la temperatura          **
**                       d'ebullició                                    **
**                                                                      **
*************************************************************************/
//Raúl Martos


float indicador = 6.5;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( indicador < 3.5)
  {
    Serial.print("A");
  } 
  
  else if ( indicador <6.5 && indicador >=3.5)
  
  {
    Serial.print ("B");
  }
  
  else if ( indicador <11.1 && indicador >=6.5 ) 
  {
    Serial.print ( "C ");
  }
  
  else if ( indicador < 17.7 && indicador >=11.1)
  
  {
    Serial.print("D");
  }
  
  else if ( indicador <38.2 && indicador >= 17.7)
  {
    Serial.print( "E");
  }
  
  else if ( indicador < 43.2 && indicador >= 38.2)
  {
    Serial.print ( "F");
  }
  
  
 else if ( indicador >= 43.2)
 {
   Serial.print( "G" );
 }
       
}

void loop()   // we need this to be here even though its empty
{
}

