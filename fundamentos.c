#include <stdio.h>   
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void separacion(){
    printf("-------------------------------------------------------------------------------------------------------------------- \n");
}


    struct pais {
        int n_habi ; 
        char nombre[30]; 
    }; // obligatorio el punto y coma 
 
int main(){

    struct pais argentina , bolivia , uruguay  ; 

    printf("ingrese el nombre del primer pais : \n");
    fgets(argentina.nombre , sizeof(argentina.nombre) , stdin);
    printf("ingrese la cantidad de habitantes del primer pais : \n");
    scanf("%d" , &argentina.n_habi);
    while(getchar() != '\n');
    separacion();

    printf("ingrese el nombre del segundo pais : \n");
    fgets(bolivia.nombre , sizeof(bolivia.nombre) , stdin);
    printf("ingrese la cantidad de habitantes del segundo pais : \n");
    scanf("%d" , &bolivia.n_habi);
    while(getchar() != '\n');
    separacion();


    printf("ingrese el nombre del tercer pais : \n");
    fgets(uruguay.nombre , sizeof(uruguay.nombre) , stdin);
    printf("ingrese la cantidad de habitantes del tercer pais : \n");
    scanf("%d" , &uruguay.n_habi);
    while(getchar() != '\n');
    separacion();

    int arr[3] = {argentina.n_habi ,  bolivia.n_habi , uruguay.n_habi};

    int maximo = arr[0] ;
    int indice = 0 ; 

    for(int i = 1 ; i < 3; i++){
        if(maximo < arr[i]){
            maximo = arr[i];
            indice = i ;
        }

    }
    char habitantes[3][20];
    strcpy(habitantes[0] , argentina.nombre);
    strcpy(habitantes[1] , bolivia.nombre);
    strcpy(habitantes[2] , uruguay.nombre);


    printf("el nombre del pais con mayor cantidad de habitantes es : %s con la cantidad de %d habitantes\n", habitantes[indice], arr[indice]);


}









