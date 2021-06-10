int LED = 13; // define o pino de entrada do led

void setup() {
  pinMode(LED, OUTPUT); //Inicia o led
  Serial.begin(9600);  //define a faixa de comunicaçao com o serial.
}


void loop() {
  digitalWrite(LED, LOW); //desliga o led
  int value = analogRead(A0); //faz a leitura da quatidade de luz atraves do sensor no pino A0
  Serial.println("Quantidade de luz : ");  // mostra o texto
  Serial.println(value); //mostra a quantidade de luz capitada pelo sensor
  
if(value < 500) {  // verifica a condiçao para o acionamento do buzzer e do led
   digitalWrite(LED, HIGH); //liga o led
}

  delay(1000); //espera 1 segundo para fazer uma nova leitura

}
