/*************************************************************************
**                                                                      **
** Programa que escriu un comentari "si" supera la temperatura          **
**                       d'ebullició                                    **
**                                                                      **
*************************************************************************/
//Raúl Martos


int tempAigua = 69;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( tempAigua > 100)
  {
    Serial.print("Aigua supera els 100C, esta bullint!");
  } 
  
  else if ( tempAigua >= 90 )
  
  {
    Serial.print (" Aigua encara no bull")
  }
  
  else if ( tempAigua < 100 )
  {
    
 else
 {
   Serial.print( "Encara no esta bullint" );
 }
       
}

void loop()   // we need this to be here even though its empty
{
}

