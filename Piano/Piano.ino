int botao = 6;
int botaodois = 5;
int botaotres = 4;
int botaoquatro = 3;
int led = 13;
int leddois = 12;
int ledtres = 11;
int ledquatro = 10;
bool estadoLed = 0;
int buzzer = 7;
 
void setup()
{
  pinMode(botao, INPUT_PULLUP); // define o pino do botao como entrada "INPUT"
  pinMode(led, OUTPUT);
  pinMode(botaodois, INPUT_PULLUP); // define o pino do botao como entrada "INPUT"
  pinMode(leddois, OUTPUT);
  pinMode(botaotres, INPUT_PULLUP); // define o pino do botao como entrada "INPUT"
  pinMode(ledtres, OUTPUT);
  pinMode(botaoquatro, INPUT_PULLUP); // define o pino do botao como entrada "INPUT"
  pinMode(ledquatro, OUTPUT);
  pinMode (buzzer, OUTPUT);
   
}
 
void loop()
{
  if(digitalRead(botao) == LOW) // Se o botão for pressionado
  {
    estadoLed = !estadoLed; // troca o estado do LED
    digitalWrite(led, estadoLed);
     // Aciona o buzzer na frequencia relativa ao Dó em Hz
    tone(buzzer,261);    
    // Espera um tempo para Desativar
    delay(1000);
    //Desativa o buzzer
    noTone(buzzer); 
    while(digitalRead(botao) == LOW);
    delay(100);       
  }
  if(digitalRead(botaodois) == LOW) // Se o botão for pressionado
  {
    estadoLed = !estadoLed; // troca o estado do LED
    digitalWrite(leddois, estadoLed);
   // Aciona o buzzer na frequencia relativa ao Ré em Hz   
    tone(buzzer,293); 
    // Espera um tempo para Desativar
    delay(1000);
    //Desativa o buzzer
    noTone(buzzer); 
    while(digitalRead(botaodois) == LOW);
    delay(100);       
  }      
  if(digitalRead(botaotres) == LOW) // Se o botão for pressionado
  {
    estadoLed = !estadoLed; // troca o estado do LED
    digitalWrite(ledtres, estadoLed);
     // Aciona o buzzer na frequencia relativa ao Mi em Hz
    tone(buzzer,329);   
    // Espera um tempo para Desativar
    delay(1000);
    //Desativa o buzzer
    noTone(buzzer); 
    while(digitalRead(botaotres) == LOW);
    delay(100);       
  }
   if(digitalRead(botaoquatro) == LOW) // Se o botão for pressionado
  {
    estadoLed = !estadoLed; // troca o estado do LED
    digitalWrite(ledquatro, estadoLed);
      // Aciona o buzzer na frequencia relativa ao Fá em Hz
    tone(buzzer,349);   
    // Espera um tempo para Desativar
    delay(1000);
    //Desativa o buzzer
    noTone(buzzer); 
    while(digitalRead(botaoquatro) == LOW);
    delay(100);       
  }        
}
