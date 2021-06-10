int botao = 13;
int botaodois = 12;;
int botaotres = 11;
int botaoquatro = 10;
int buzzer = 7;
const int pinoPOT = A5; //PINO ANALÓGICO UTILIZADO PELO POTENCIÔMETRO

float Notas = 0; //VARIÁVEL QUE ARMAZENA O VALOR DA LUMINOSIDADE QUE SERÁ APLICADA AO LED
void setup()
{
  pinMode(botao, INPUT_PULLUP); // define o pino do botao como entrada "INPUT"
  pinMode(botaodois, INPUT_PULLUP); // define o pino do botao como entrada "INPUT"
  pinMode(botaotres, INPUT_PULLUP); // define o pino do botao como entrada "INPUT"
  pinMode(botaoquatro, INPUT_PULLUP); // define o pino do botao como entrada "INPUT"
  pinMode (buzzer, OUTPUT); //Define o pino do buzzer
  pinMode(pinoPOT, INPUT); //DEFINE O PINO COMO ENTRADA
}
 
void loop()
{
  Notas = map(analogRead(pinoPOT), 0, 1023, 0, 255); //EXECUTA A FUNÇÃO "map" DE ACORDO COM OS PARÂMETROS PASSADOS
  
  if(digitalRead(botao) == LOW and Notas == 0) // Se o botão for pressionado
  {
    // Aciona o buzzer na frequencia relativa ao Dó em Hz
    tone(buzzer,261);  
    // Espera um tempo para Desativar
    delay(1000);
    //Desativa o buzzer
    noTone(buzzer); 
    while(digitalRead(botao) == LOW);
    delay(100);       
  }
  if(digitalRead(botaodois) == LOW and Notas == 0) // Se o botão for pressionado
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
  if(digitalRead(botaotres) == LOW and Notas == 0) // Se o botão for pressionado
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
   if(digitalRead(botaoquatro) == LOW and Notas == 0) // Se o botão for pressionado
  { 
    // Aciona o buzzer na frequencia relativa ao Fá em Hz
    tone(buzzer,349);      
    // Espera um tempo para Desativar
    delay(1000);
    //Desativa o buzzer
    noTone(buzzer); 
    while(digitalRead(botaoquatro) == LOW);
    delay(100);       
  }     
  if(digitalRead(botao) == LOW and Notas > 0) // Se o botão for pressionado
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
  if(digitalRead(botaodois) == LOW and Notas > 0) // Se o botão for pressionado
  {
     // Aciona o buzzer na frequencia relativa ao Lá em Hz
    tone(buzzer,440);  
    // Espera um tempo para Desativar
    delay(1000);
    //Desativa o buzzer
    noTone(buzzer); 
    while(digitalRead(botaodois) == LOW);
    delay(100);       
  }      
  if(digitalRead(botaotres) == LOW and Notas > 0) // Se o botão for pressionado
  {
    // Aciona o buzzer na frequencia relativa ao Si em Hz
    tone(buzzer,494);   
    // Espera um tempo para Desativar
    delay(1000);
    //Desativa o buzzer
    noTone(buzzer); 
    while(digitalRead(botaotres) == LOW);
    delay(100);       
  }
   if(digitalRead(botaoquatro) == LOW and Notas > 0) // Se o botão for pressionado
  { 
   // Aciona o buzzer na frequencia relativa ao Do maior em Hz
    tone(buzzer,523);    
    // Espera um tempo para Desativar
    delay(1000);
    //Desativa o buzzer
    noTone(buzzer); 
    while(digitalRead(botaoquatro) == LOW);
    delay(100);       
  }     
}
