int botao = 13;
int botaodois = 12;
int botaotres = 11;
int botaoquatro = 10;
int buzzer = 9;
 
void setup()
{
  pinMode(botao, INPUT_PULLUP); // define o pino do botao como entrada "INPUT"
  pinMode(botaodois, INPUT_PULLUP); // define o pino do botao como entrada "INPUT"
  pinMode(botaotres, INPUT_PULLUP); // define o pino do botao como entrada "INPUT"
  pinMode(botaoquatro, INPUT_PULLUP); // define o pino do botao como entrada "INPUT"
  pinMode (buzzer, OUTPUT);
}
 
void loop()
{
  if(digitalRead(botao) == LOW) // Se o botão for pressionado
  {
    // Aciona o buzzer na frequencia relativa ao Sol em Hz
    tone(buzzer,392);   
    // Espera um tempo para Desativar
    delay(1000);
    //Desativa o buzzer
    noTone(buzzer); 
    while(digitalRead(botao) == LOW);
    delay(100);       
  }
  if(digitalRead(botaodois) == LOW) // Se o botão for pressionado
  {
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
    // Aciona o buzzer na frequencia relativa ao Dó em Hz
    tone(buzzer,261);     
    // Espera um tempo para Desativar
    delay(1000);
    //Desativa o buzzer
    noTone(buzzer); 
    while(digitalRead(botaoquatro) == LOW);
    delay(100);       
  }        
}
