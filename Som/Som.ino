float seno;
int frequencia;
int buzzer = 7;
 
void setup() {
 
 pinMode(buzzer,OUTPUT);
}
 
void loop() {
  // Aciona o buzzer na frequencia relativa ao Dó em Hz
    tone(buzzer,261);    
    // Espera um tempo para Desativar
    delay(1000);
    //Desativa o buzzer
    noTone(buzzer); 
    // Aciona o buzzer na frequencia relativa ao Ré em Hz   
    tone(buzzer,293);             
    delay(1000);    
    noTone(buzzer); 
    // Aciona o buzzer na frequencia relativa ao Mi em Hz
    tone(buzzer,329);      
    delay(1000);
    noTone(buzzer);     
    // Aciona o buzzer na frequencia relativa ao Fá em Hz
    tone(buzzer,349);    
    delay(1000);    
    noTone(buzzer); 
    // Aciona o buzzer na frequencia relativa ao Sol em Hz
    tone(buzzer,392);            
    delay(1000);
    noTone(buzzer); 
     // Aciona o buzzer na frequencia relativa ao Lá em Hz
    tone(buzzer,440);      
    delay(1000);
    noTone(buzzer);     
    // Aciona o buzzer na frequencia relativa ao Si em Hz
    tone(buzzer,494);    
    delay(1000);    
    noTone(buzzer); 
    // Aciona o buzzer na frequencia relativa ao Do maior em Hz
    tone(buzzer,523);            
    delay(1000);
    noTone(buzzer); 
 }
