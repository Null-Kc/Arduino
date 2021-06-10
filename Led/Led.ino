
int Um = 13;
int Dois = 12;
int Tres = 11;
int Quatro = 10;
int Cinco = 9;
int Seis = 8;
 
void setup() {
  
  pinMode(Um, OUTPUT);
  pinMode(Dois, OUTPUT);
  pinMode(Tres, OUTPUT);
  pinMode(Quatro, OUTPUT);
  pinMode(Cinco, OUTPUT);
  pinMode(Seis, OUTPUT);
}
 
void loop() {

  digitalWrite(Um, LOW);
  digitalWrite(Dois, LOW);
  digitalWrite(Tres, LOW);
  digitalWrite(Quatro, LOW);
  digitalWrite(Cinco, LOW);
  digitalWrite(Seis, LOW);
 
 
 digitalWrite(Um, HIGH);
 digitalWrite(Seis, HIGH); 
 delay(5000);
 digitalWrite(Um, LOW);
 digitalWrite(Seis, LOW);

 digitalWrite(Dois, HIGH);
 digitalWrite(Cinco, HIGH); 
 delay(2000);
 digitalWrite(Dois, LOW);
 digitalWrite(Cinco, LOW);

 digitalWrite(Quatro, HIGH);
 digitalWrite(Tres, HIGH); 
 delay(5000);
 digitalWrite(Quatro, LOW);
 digitalWrite(Seis, LOW);

 digitalWrite(Dois, HIGH);
 digitalWrite(Cinco, HIGH); 
 delay(2000);
 digitalWrite(Dois, LOW);
 digitalWrite(Cinco, LOW);


}
