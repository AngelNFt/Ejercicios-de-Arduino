int cadenaleds[]={ 5 , 6 , 7 , 8 };
tiempo int = 200 ;
entero n= 0 ;



 configuración vacía () {
  De serie. comenzar ( 9600 );

}

 bucle vacío () {
  
para (n= 0 ;n< 4 ; n++){
  digitalWrite (cadenaleds[n], HIGH);
  retraso (tiempo);
  }
}
