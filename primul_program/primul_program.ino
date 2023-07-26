int led1 = 3; //led1 pe pin = 3

void setup() {
  pinMode(led1, OUTPUT);
}

void loop() {
  digitalWrite(led1, 1); //5 volti merg catre pin 3   
  delay(3000); //asteapta 3 secunde

  digitalWrite(led1, 0); //stinge led 
  delay(3000); //asteapta 3 secunde

  digitalWrite(led1, 1);//aprinde led
  delay(3000); //asteapta 3 secunde

  delay(500); 
  digitalWrite(led1, 0); 

  delay(500);
  digitalWrite(led1, 1);
}
