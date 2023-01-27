int leds[] = {5, 6, 7, 8, 9};
int zumbador = 10;
int pulsador = 3;
int valor_pulsador = 0;

// Variables de tiempo de encendido
int TIEMPO_MAXIMO = 200;
int TIEMPO_MINIMO = 10;
int DECREMENTO_TIEMPO = 20;
// tiempo cambiate de pulsador
int tiempo_actual = 200;

void setup()
{
    Serial.begin(9600);
    for (int b = 0; b <= 4; b++)
    {
        pinMode(leds[b], OUTPUT);
        pinMode(zumbador, OUTPUT);
        pinMode(pulsador, INPUT);
        attachInterrupt(digitalPinToInterrupt(pulsador), plus, RISING);
    }
}

void loop()
{
    for (int b = 0; b <= 4; b++)
    {
        valor_pulsador = digitalRead(pulsador);

        if (tiempo_actual == 0)
        {
            tiempo_actual = TIEMPO_MAXIMO;
            tiempo_actual = TIEMPO_MINIMO;
        }
        if (b == 2 && valor_pulsador == 1)
        {
            tiempo_actual = TIEMPO_MINIMO - DECREMENTO_TIEMPO;
            digitalWrite(zumbador, HIGH);
            delay(10);
        }
        zumbador_pulsador(leds[b], tiempo_actual);
    }
}

void zumbador_pulsador(int delay_time, int pin)
{

    digitalWrite(pin, HIGH);
    delay(delay_time);
    digitalWrite(pin, LOW);
}

void plus()
{
    Serial.println("Entrar a less");
    tiempo_actual - DECREMENTO_TIEMPO;
    delay(tiempo_actual);
}
