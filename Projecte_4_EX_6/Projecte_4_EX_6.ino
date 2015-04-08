/*************************************************************************
**                                                                      **
** Programa que que executa el programa els cops indicats               **
**                                                                      **
**                                                                      **
**                                                                      **
*************************************************************************/
//Raúl Martos


int comptar = 11;
void setup()                    // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);
  for (int i=0; i <= comptar; i++) // solo se cambia esta parte
  {
    Serial.print(i);
    Serial.print("-");
  } 
}
void loop()     // we need this to be here even though its empty
{
}

// el programa en aquest cas nira escrivint els valors de -i- mentres aquesta -i- no superi el valor de la variable. Comença per 0 i escriu els valors de i fins arrivar a 11

