/*************************************************************************
**                                                                      **
** Programa que escriu un comentari "si" supera la temperatura          **
**                       d'ebullició                                    **
**                                                                      **
*************************************************************************/
//Raúl Martos


int KgCO2/m2 = 30;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( KgCO2/m2 > 100)
  {
    Serial.print("Aigua supera els 100C, esta bullint!");
  } 
  
  else if ( KgCO2/m2 >= 90 )
  
  {
    Serial.print (" Apunt de bullir");
  }
  
  else if ( KgCO2/m2 ) 
  {
    

 else
 {
   Serial.print( "Encara no esta bullint" );
 }
       
}

void loop()   // we need this to be here even though its empty
{
}

