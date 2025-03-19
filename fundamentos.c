#include <stdio.h>   
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define CANTIDAD_EMPLEADOS 4 
#define MESES 3 

void separacion(){
    printf("\n");
    printf("-------------------------------------------------------------------------------------------------------------------- \n");
}




int main(){
    char nombre[20];     
    char nombres_empleados[4][20]; // cadena , cantidad caracteres

    float sueldos[4][3] ;//1ro filas , 2do columnas 
    float ingreso_acomulado[4]; 
    float total_sueldos = 0 ; 
    int j = 0 ;
    char salida[4][20] = {"primer" , "segundo" , "tercer" , "cuarto"}; 
    float sueldo ; 
    char empleado_con_mayor_ingreso[20]; 

    do{

        for (int i = j ; i < 4;){
            printf("%s empleado : ", salida[j]);
            fgets(nombre , sizeof(nombre) , stdin ); 
            strcpy(nombres_empleados[i] , nombre );
            break ; 
        }
        
        for (int e = 0; e < 3 ; e++){    
            printf("sueldo del %s mes es :\n", salida[e]);
            scanf("%f", &sueldo);
            sueldos[j][e] = sueldo ;            
            ingreso_acomulado[j] = ingreso_acomulado[j] + sueldo ;            
        }


        printf("el ingreso acomulado de los ultimos 3 meses de %s es de %.2f pesos", nombres_empleados[j] , ingreso_acomulado[j]);

        total_sueldos = total_sueldos + ingreso_acomulado[j] ;

        j++;
        separacion();
        while(getchar() != '\n');

    }while(j < 4);
    
    float maximo = ingreso_acomulado[0] ;
    int indice_mayor = 0 ; 

    for(int i = 1 ; i < 4 ; i++){
        if(ingreso_acomulado[i] > maximo){
            maximo = ingreso_acomulado[i];
            indice_mayor = i ; 
            // strcpy(empleado_con_mayor_ingreso , nombres_empleados[i]);
        }

    }
    
    while(getchar() != '\n');

    printf("el total pagado en sueldos a todos los empleados en los ultimos 3 meses es de %.2f pesos\n" , total_sueldos);

    printf("el empleado con mayores ingresos es %s con ingreso acomulado de : %.2f ", nombres_empleados[indice_mayor], maximo);
    separacion();// el "nombres_empleados[indice_mayor]  seria el equivalente a "empleado_con_mayores_ingresos" "

    return 0 ;

}









