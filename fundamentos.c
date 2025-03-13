#include <stdio.h>   
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(){
    char lista[30][30] ; // matriz 
    char nombre[20]; // 1 cadena 


    printf("ingrese cadenas hasta apretar enter \n");    

    int contador = 0 ; 

    fgets(nombre , sizeof(nombre) , stdin ); //  

    // los caracteres especiales siempre se comparan con su mismo tipo , osea caracteres , nombre[caracter-inicial]  = nombre[0]

    while(nombre[0] == ' ' || nombre[0] == '\n'){ // validacion "mientras que sea.."
        printf("porfavor ingrese almenos un dato para poder continuar \n");
        fgets(nombre , sizeof(nombre) , stdin ); //se actualiza el dato  

    }

    
    while(nombre[0] != '\n' && nombre[0] != ' '){ // validacion "mientras que no sea" 

        strcpy(lista[contador], nombre); // [indice] -> "nombre" 
        contador++;

        // logica detras de la filtracion de datos para que no se repitan los nombres 

        bool repite ; 

        do{
            repite = false ; 

            fgets(nombre , sizeof(nombre) , stdin ); 
            
            for(int i = 0 ; i < contador; i++){

                if(strcmp(lista[i] , nombre) == 0 ){
                    repite = true ; 
                    break ; // break rompe unicamente for();, ademas es obligatorio . 
                }    

            }            

        }while(repite); // si repite se convierte en true , mientras(verdadero) se repetira , si es mientras(falso) simplemente saldra 



    }

    // logica detras del ordenamiento alfabeticamente de la lista . 

    char aux[20]; 

    for(int i = 0 ; i < contador ; i++){

        for(int j =  0 ; j < (contador -1); j++ ){// 
            if(strcmp(lista[j] , lista[j + 1]) > 0 ){

                strcpy(aux , lista[j]);                // char aux[] = lista[j];
                strcpy(lista[j] , lista[j + 1]);       // lista[j] = lista[j+ 1] ;
                strcpy(lista[j + 1] , aux);             //lista[j+1] = aux
            }

        } 

    }
    

        
            printf("la lista esta ordenada alfabeticamente y filtrada de la siguiente manera  : \n ");
            for(int i = 0 ; i < contador ; i++){ // mostrar datos (cadenas)
                printf("\n%s" , lista[i]);
            }    


    return 0 ; 

}
