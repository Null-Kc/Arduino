int LED = 13; // define o pino de entrada do led
int LEDV = 12; // define o pino de entrada do led
int buzzer = 10; // define o pino de entrada do buzzer
float seno; // cria a variavel seno
int frequencia; // cria a variavel frequencia 
int x=0; //define a variavel x

void setup() {
  pinMode(buzzer,OUTPUT); //Inicia o Buzzer
  pinMode(LED, OUTPUT); //Inicia o led
  Serial.begin(9600);  //define a faixa de comunicaçao com o serial.
}


void loop() {
  int value = analogRead(A0); //faz a leitura da quatidade de luz atraves do sensor no pino A0
  Serial.println("Quantidade de luz : ");  // mostra o texto
  Serial.println(value); //mostra a quantidade de luz capitada pelo sensor
  
if(value < 400) {  // verifica a condiçao para o acionamento do buzzer e do led
   digitalWrite(LED, HIGH); //liga o led
  digitalWrite(LEDV, LOW); //desliga o led
  //converte graus para radiando e depois obtém o valor do seno
  seno=(sin(x*3.1416/180));
  //gera uma frequência a partir do valor do seno
  frequencia = 2000+(int(seno*1000));
  tone(buzzer,frequencia);
  delay(1000);
  noTone (buzzer);
  digitalWrite(LED, LOW); //desliga o led
  digitalWrite(LEDV, HIGH); //liga o led
}
  digitalWrite(LEDV, HIGH); //liga o led
  delay(1000); //espera 1 segundo para fazer uma nova leitura

  
}
