int VERD = 13; //define o pino de entrada do led verde
int VERM = 12; //define o pino de entrada do led vermelho
int buzzer = 9; // define o pino de entrada do buzzer
float seno; // cria a variavel seno
int frequencia; // cria a variavel frequencia
int x = 0; //define a variavel x

void setup() {
  pinMode(VERD, OUTPUT); //inicia o led verde
  pinMode(VERM, OUTPUT); //inicia o led vermelho
  pinMode(buzzer, OUTPUT); //Inicia o Buzzer
  Serial.begin(9600);  //define a faixa de comunicaçao com o serial.

}

void loop() {
  int value = analogRead(A0); //faz a leitura da quatidade de luz atraves do sensor no pino A0
  Serial.println("Quantidade de luz : ");  // mostra o texto
  Serial.println(value); //mostra a quantidade de luz capitada pelo sensor
  digitalWrite(VERD, HIGH); //liga o led verde
  if (value > 100) {
    digitalWrite(VERD, LOW); //desliga o led verde
    digitalWrite(VERM, HIGH); //liga o led vermelho
    seno = (sin(x * 3.1416 / 180)); //define o valor do seno
    //gera uma frequência a partir do valor do seno
    frequencia = 2000 + (int(seno * 1000)); //define o valor da frequencia 
    tone(buzzer, frequencia); //inicia o buzzer
    delay(1000); //espera 1 segundo
    noTone (buzzer); //desliga o buzzer
    digitalWrite(VERM, LOW); //desliga o led vermelho
  }
  delay(500); //espera 0.5 segundos
}
