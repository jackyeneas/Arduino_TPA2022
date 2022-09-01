const int LED1 = 11;


void setup()
{
  pinMode(LED1, OUTPUT);
}

void loop()
{
  int i;
  for(int i=0; i<255; i++){
	analogWrite(LED1, i);
    delay(10);}
  delay(1000);
  for(i=255; i>0; i--){
    analogWrite(LED1, i);
  	delay(10);}
  delay(1000);
}
