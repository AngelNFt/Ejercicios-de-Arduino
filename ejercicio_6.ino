int cadenaleds[]={5,6,7,8};
int pulsador=4;
int tiempo=200;
int n=0;



void setup() {
  for(n=0;n<4;n++) {
    pinMode (cadenaleds[n],OUTPUT);}pinMode (pulsador,INPUT); 

}


void flash() {
  for (n=0;n<4;n++) {
    digitalWrite (cadenaleds[n],HIGH);
    delay (tiempo);
    digitalWrite (cadenaleds[n],LOW);
    delay (tiempo);}
    }


void loop() {
 if (digitalRead(pulsador)==HIGH) {
  flash ();}
  }
