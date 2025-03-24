#include <stdio.h>   
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

    struct pais {
        int n_habi ; 
        char nombre[30]; 
    }; // obligatorio el punto y coma 

void separacion(){
    printf("-------------------------------------------------------------------------------------------------------------------- \n");
}

void imprimir_resultado(struct pais parametro1 , struct pais parametro2 , struct pais parametro3 ){
    int arr[3] = {parametro1.n_habi ,  parametro2.n_habi , parametro3.n_habi};

    int maximo = arr[0] ;
    int indice = 0 ; 

    for(int i = 1 ; i < 3; i++){
        if(maximo < arr[i]){
            maximo = arr[i];
            indice = i ;
        }

    }
    char habitantes[3][20];

    strcpy(habitantes[0] , parametro1.nombre);
    strcpy(habitantes[1] , parametro2.nombre);
    strcpy(habitantes[2] , parametro3.nombre);

    printf("el nombre del pais con mayor cantidad de habitantes es : %s con la cantidad de %d habitantes\n", habitantes[indice], arr[indice]);

}


struct pais cargar_datos(){
    
    struct pais instancia;

    printf("ingrese el nombre del pais : \n");
    fgets(instancia.nombre , sizeof(instancia.nombre) , stdin);
    printf("ingrese la cantidad de habitantes de ese pais : \n");
    scanf("%d" , &instancia.n_habi);
    while(getchar() != '\n');
    separacion();
    
    return instancia ;
}


 
int main(){

    struct pais argentina , bolivia , uruguay  ; 

    argentina = cargar_datos();
    bolivia = cargar_datos();
    uruguay = cargar_datos();

    imprimir_resultado(argentina , bolivia , uruguay);

    return 0 ; 

}









