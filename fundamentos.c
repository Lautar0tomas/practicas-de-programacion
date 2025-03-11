#include <stdio.h>   
#include <stdlib.h>
#include <string.h>

int main(){
    char lista[30][20] ;
    char nombre[20]; 


    printf("ingrese cadenas hasta apretar enter \n");    

    int contador = 0 ; 

    fgets(nombre , sizeof(nombre) , stdin ); 

    while(nombre[0] == ' ' || nombre[0] == '\n'){
        printf("porfavor ingrese almenos un dato para poder continuar \n");
        fgets(nombre , sizeof(nombre) , stdin );         
    }

    
    while(nombre[0] != '\n' && nombre[0] != ' '){
        
        strcpy(lista[contador], nombre); 

        fgets(nombre , sizeof(nombre) , stdin ); 

        contador++;

    }
    
        
            printf("los datos son : \n ");
            for(int i = 0 ; i < contador ; i++){
                printf("\n%s" , lista[i]);
    
            }    



    return 0 ; 

}
