#include <stdio.h>   
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define cantidad 3 


    struct pais {
        int n_habi ; 
        char nombre[30]; 
    }; // obligatorio el punto y coma 

void separacion(){
    printf("-------------------------------------------------------------------------------------------------------------------- \n");
}

void imprimir_resultado(struct pais parametro[cantidad]){

    int maximo = parametro[0].n_habi;
    int indice = 0 ; 

    for(int i = 1 ; i < cantidad; i++){
        if(maximo < parametro[i].n_habi){
            maximo = parametro[i].n_habi;
            indice = i ;
        }

    }
    printf("el nombre del pais con mayor cantidad de habitantes es : %s con la cantidad de %d habitantes\n", parametro[indice].nombre , parametro[indice].n_habi);

}

void cargar_datos(struct pais parametro[cantidad]){
    
    
    for(int i = 0 ; i < cantidad ; i++){
        printf("ingrese el nombre del pais : \n");
        fgets(parametro[i].nombre , sizeof(parametro[i].nombre) , stdin);
        printf("ingrese la cantidad de habitantes de ese pais : \n");
        scanf("%d" , &parametro[i].n_habi);
        while(getchar() != '\n');
        separacion();
    }
    
}


 
int main(){

    struct pais paises[cantidad]; 
    cargar_datos(paises); //paises = paises[0];
    imprimir_resultado(paises);

    return 0 ; 

}









