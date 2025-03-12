#include <stdio.h>   
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// realizar el ejercicio mas dificil del tema del libro "the ultimte c handbook"

int main(){
    bool flujo = true ; 
    int azar = 10 ; 
    int usuario ; 

// ahora quiero decir las veces que lo e intentado 

    int contador = 0 ; 
    // ahora quiero que me digas que numeros puse 
    int contenedor[30]; 

    printf("adivina el numero que salio \n");
    while(flujo){        

        scanf("%d", &usuario) ; 

            if(usuario == azar ){
                printf("haz adivinado el numero! \n");
                flujo = false ;
            } else {
                printf("sigue intentando \n");
            }

            contenedor[contador] = usuario ;
            contador++ ;
    }
    

    if(contador != 1){

        printf("lo haz intentado %d veces\n" , contador );    

    }else{
        printf("lo haz intentado %d vez\n", contador);
    }
        
    printf("los numeros que intentaste son : \n");

    for(int i = 0 ; i < contador ; i++){
        printf("%d\n" , contenedor[i]);

    }

    printf("programa finalizado \n");


    

    return 0 ; 

}
