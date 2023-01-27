// Ejercicio 3 en función

leds int [] = { 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 };
tiempo int = 200 ;
int grupo1 = 0 ;

 configuración vacía ()
{ // comienza la configuración
    para (grupo1 = 0 ; grupo1 < 8 ; grupo1++)
    {
        pinMode (leds[grupo1], SALIDA);
    }
}
// Inicio de la función 1
vacío  conteo ()
{
    para (grupo1 = 0 ; grupo1 < 7 ; grupo1++)
    {
        digitalWrite (leds[grupo1], HIGH);
        retraso ( 100 );
        digitalWrite (leds[grupo1], BAJO);
        retraso ( 100 );
    }
}
// Fin de la funcion 1

// Inicio de la funcion 2
vacío  inverso ()
{
    para (grupo1 = 7 ; grupo1 >= 0 ; grupo1--)
    {
        digitalWrite (leds[grupo1], HIGH);
        retraso ( 100 );
        digitalWrite (leds[grupo1], BAJO);
        retraso ( 100 );
    }
}
// Fin de la funcion 2

// Inicio de la funcion 3
 salto nulo ()
{
    para (grupo1 = 0 ; grupo1 <= 8 ; grupo1 = grupo1 + 2 )
    {
        digitalWrite (leds[grupo1], HIGH);
        retraso ( 200 );
        digitalWrite (leds[grupo1], BAJO);
        retraso ( 200 );
    }
}
// Fin de la funcion 3

// Inicio de la funcion 4
vacío  tip_prenden ()
{
    para (grupo1 = 0 ; grupo1 <= 8 ; grupo1++)
    {
        digitalWrite (leds[grupo1], HIGH);
    }
    retraso ( 300 );
}
vacío  tip_apagan ()
{
    para (grupo1 = 0 ; grupo1 <= 8 ; grupo1++)
    {
        digitalWrite (leds[grupo1], BAJO);
    }
    retraso ( 500 );
}

vacío  completo ()
{
    para ( int grupo1 = 0 ; grupo1 < 2 ; grupo1++)
    {
        tip_prenden ();
        tip_apagan ();
    }
}
// Fin de la funcion 4
// Llamado de las funciones
 bucle vacío ()
{
    conteo ();
    inversa ();
    salto ();
    tip_prenden ();
    tip_apagan ();
    completa ();
}
