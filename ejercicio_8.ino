const int analogInPin = A0; // Pin de entrada analógica al que está conectado el potenciómetro
const int analogOutPin = 9; // Pin de salida analógica al que está conectado el LED

int sensorValue = 0; // Variable sonsor
int outputValue = 0; // salida analógica
void setup() {
 
 // comunicacion entre el arduino y la pc:
 Serial.begin(9600); 
}

void loop() {
 // rLeer el valor analogico:
 sensorValue = analogRead(analogInPin); 
  // asignarlo al rango de la salida analógica:
 outputValue = map(sensorValue, 0, 1023, 0, 255); 
 //cambio valor de boton analogico
 analogWrite(analogOutPin, outputValue);

// imprimir resultado por el munitor
 Serial.print("sensor = " ); 
 Serial.print(sensorValue); 
 Serial.print("\t output = "); 
 Serial.println(outputValue);

 delay(2); 
