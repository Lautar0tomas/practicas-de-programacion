#include <stdio.h>   
#include <stdlib.h>
#include <string.h>

int main(){
    char lista[30][30] ; // matriz 
    char nombre[20]; // 1 cadena 


    printf("ingrese cadenas hasta apretar enter \n");    

    int contador = 0 ; 

    fgets(nombre , sizeof(nombre) , stdin ); //  

    while(nombre[0] == ' ' || nombre[0] == '\n'){ // validacion "mientras que sea.."
        printf("porfavor ingrese almenos un dato para poder continuar \n");
        fgets(nombre , sizeof(nombre) , stdin ); //se actualiza el dato  
    }

    
    while(nombre[0] != '\n' && nombre[0] != ' '){ // validacion "mientras que no sea" 
        
        strcpy(lista[contador], nombre); // [indice] -> "nombre" 

        fgets(nombre , sizeof(nombre) , stdin ); 
        contador++;

    }
    
        
            printf("los datos son : \n ");
            for(int i = 0 ; i < contador ; i++){ // mostrar datos (cadenas)
                printf("\n%s" , lista[i]);
            }    


    return 0 ; 

}
