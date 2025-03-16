#include <stdio.h>   
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void cargaSuma(){

    int suma1 = 0;
    int suma2 = 0;

    printf("sumar el primer valor ; \n");
    scanf("%d" , &suma1); 
    printf("sumar el segundo valor ; \n");
    scanf("%d", &suma2);

    int valor = suma1 + suma2 ; 

    printf("la suma de %d y %d es: %d\n", suma1, suma2, valor);

}

void separacion(){
    printf("-------------------------------------------------------------------------------------------------------------------- \n");
}


int main(){

    cargaSuma();
    separacion();
    cargaSuma();
    separacion();
    cargaSuma();
    printf("ultima linea\n");
    separacion();


    return 0 ;

}









