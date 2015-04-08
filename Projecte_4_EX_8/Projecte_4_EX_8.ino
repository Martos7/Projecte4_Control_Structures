/*************************************************************************
**                                                                      **
**                                                                      **
**                                                                      **
**                                                                      **
**                                                                      **
*************************************************************************/
//Raúl Martos

int comptar = 5;
int i = 0;
void setup()               // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);  
   while(i <= comptar)
  {
    Serial.print(i);
    Serial.print("-");
    i++;
  } 
}
void loop()   // we need this to be here even though its empty
{
}

// Aquest programa es molt semblant al for amb la diferencia que el while, el que fa es mentres la i sigui <= que la variable aquest anira escrivint el valor de i que comença per 0 i va sumant 1 fins que arriba a ser igual a la variable i entre aquests numeros i escriu un guió.
