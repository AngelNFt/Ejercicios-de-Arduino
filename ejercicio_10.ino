int ledPin = 8; 
int val = 0;
int delayval = 0; 

void setup() 
{
 randomSeed(0); 
 pinMode(ledPin, OUTPUT); 
}
void loop() 
{
 val = random(116,255); 
 analogWrite(ledPin, val); 
 delayval = random(25,116);
 delay(delayval);
} 
