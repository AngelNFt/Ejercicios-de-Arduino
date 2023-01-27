int pinArray[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

int controlLed = 13; // LED de control

int waitNextLed = 100; // Tiempo antes de encender el siguiente LED

// Número de LED-s que permanecen encendidos antes de empezar a apagarlos para
// formar la cola
int tailLength = 4;

// Número de LED-s conectados (que es también el tamaño del array)
int lineSize = 11;
int i;

void setup()
{
    // put your setup code here, to run once:

    // Comunicacion entre sistemas
    Serial.begin(9600)

        // Pin 13 Como salida
        pinMode(controlLed, OUTPUT);
    // ciclo para los pines
    for (i = 0; i < lineSize; i++)
    {
        pinMode(pinArray[1], OUTPUT);
    }
}

void loop()
{
    // put your main code here, to run repeatedly:

    // se establece la longitud de la cola en el contador
    int colaContador = tailLength;

    // se enciende el LED de controll para indicar que inicio el loop

    digitalWrite(controlLed, HIGH);

    for (i = 0; i < lineSize; i++)
    {
        digitalWrite(pinArray[i], HIGH);
        // Esta variable de tiempo controla la velocidad a la que se mueve la estrella
        delay(waitNextLed);

        if (colaContador == 0)
        {
            // Se apagan los LED-s en función de la longitud de la cola.
            digitalWrite(pinArray[i - tailLength], LOW);
        }
        else if (colaContador > 0)
        {
            colaContador--;
        }
        for (i = (lineSize - tailLength); i < lineSize; i++)
        {
            digitalWrite(pinArray[i], LOW); // Se apagan los LED
            // Esta variable de tiempo controla la velocidad a la que se mueve la estrella
            delay(waitNextLed);
        }
    }
}
