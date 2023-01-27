int rojo1 = 3 ;
int amarillo1 = 4 ;
int verde1 = 5 ;
int rojo2 = 6 ;
int amarillo2 = 7 ;
int verde2 = 8 ;



 configuración vacía () {
De serie. comenzar ( 9600 );
 
}

 bucle vacío () {
  
 escritura digital ( rojo1 , ALTO);
 escritura digital ( verde2 , ALTA);
 retraso ( 3000 );
 escritura digital ( rojo1 , BAJO);
 escritura digital ( verde2 , BAJO);
 retraso ( 500 );
 escritura digital ( rojo1 , ALTO);
 digitalWrite (amarillo2, ALTO);
 retraso ( 500 );
  escritura digital ( rojo1 , BAJO);
 digitalWrite (amarillo2, BAJO);
 retraso ( 500 );
 escritura digital ( verde1 , ALTA);
 escritura digital ( rojo2 , ALTO);
 retraso ( 3000 );
  escritura digital ( verde1 , BAJO);
 escritura digital ( rojo2 , BAJO);
 retraso ( 500 );
 digitalWrite (amarillo1, ALTO);
 escritura digital ( rojo2 , ALTO);
 retraso ( 500 );
  
  
}
