#include <stdio.h>   
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define tamano 3

    struct fecha { 
        int dd;
        int mm;
        int aa;
    };

struct producto {
    int codigo ; 
    char nombre[10]; 
    float precio ;
    struct fecha fechavencimiento; 
};

void iterar(){
    printf("-----------------------------------------------------------------------------------------------\n");

}

void imprimir(struct producto pro[tamano]){

    for(int i = 0 ; i < tamano ; i++){
        printf("%d    %s    %0.2f\n",pro[i].codigo , pro[i].nombre , pro[i].precio);
    }

float maximo = pro[0].precio;
int indice = 0 ; 
    for(int j = 1 ; j < tamano ; j++){
        if(maximo < pro[j].precio){
            maximo = pro[j].precio ;
            indice = j ;
        }

    }
printf("el nombre del articulo con mayor precio es la : %s que sale un total de : %.2f\n" , pro[indice].nombre , pro[indice].precio );
printf("con fecha de vencimiento el %d/%d/%d\n",pro[indice].fechavencimiento.dd ,pro[indice].fechavencimiento.mm ,pro[indice].fechavencimiento.aa  );

}


void cargar(struct producto pro[tamano]){

    for(int i = 0 ; i < tamano ; i++){
        printf("cargar el codigo del producto\n");
        scanf("%d" , &pro[i].codigo);
        while(getchar() != '\n');
        printf("cargar el nombre del producto\n");
        fgets(pro[i].nombre , sizeof(pro[i].nombre) , stdin);
        printf("cargar precio del producto\n");
        scanf("%f" , &pro[i].precio);
        // while(getchar() != '\n');
        printf("vencimiento dia\n");
        scanf("%d", &pro[i].fechavencimiento.dd);
        printf("vencimiento mes\n");
        scanf("%d", &pro[i].fechavencimiento.mm);
        printf("año\n");
        scanf("%d", &pro[i].fechavencimiento.aa);
        iterar();
    }



}


int main(){

    struct fecha fechavencimiento[tamano];
    struct producto pro[tamano];
    cargar(pro);
    imprimir(pro);


    return 0 ;
}








