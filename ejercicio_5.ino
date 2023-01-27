int leds[]={5,6,7,8,9,10,11};
int n=0;
int tiempo=50;


void setup() {
 for (n=0;n<7;n++) {    
  pinMode(leds[n],OUTPUT);  
  } 
}

void loop() {
  for (n=0;n<7;n++) {    
    digitalWrite (leds[n],HIGH);    
    delay(tiempo);    
    digitalWrite (leds[n],LOW);    
    delay(tiempo);  }  
    
   for (n=6;n>=0;n--) {    
     digitalWrite (leds[n],HIGH);    
     delay(tiempo);    
     digitalWrite (leds[n],LOW);    
     delay(tiempo);  }
