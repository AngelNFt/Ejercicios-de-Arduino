int LED1 = 5 ;
int LED2 = 6 ;
int LED3= 7 ;
int LED4= 8 ;

 configuración vacía () {
De serie. comenzar ( 9600 );


}

 bucle vacío () {
// PRENDE PIN 8 POR 200 MILISEGUNDO
escritura digital ( LED4 , ALTO);
escritura digital (LED3, BAJO);
escritura digital ( LED2 , BAJO);
escritura digital ( LED1 , BAJO);
retraso ( 500 );

// prende pin 7
escritura digital ( LED4 , BAJO);
escritura digital (LED3, ALTO);
escritura digital ( LED2 , BAJO);
escritura digital ( LED1 , BAJO);
retraso ( 500 );

// prende pin 6
escritura digital ( LED4 , BAJO);
escritura digital (LED3, BAJO);
escritura digital ( LED2 , ALTO);
escritura digital ( LED1 , BAJO);
retraso ( 500 );

// prende pin 5
escritura digital ( LED4 , BAJO);
escritura digital (LED3, BAJO);
escritura digital ( LED2 , BAJO);
escritura digital ( LED1 , ALTO);
retraso ( 500 );
}
