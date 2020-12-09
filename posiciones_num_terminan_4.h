#include <stdio.h>

//8. Leer 10 números enteros, almacenarlos en un vector y determinar en qué posiciones se encuentran los números terminados en 4.

void llenar_arreglo2(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("Digite un numero: ");
        scanf("%d", &arr[i]);
    }    
}

void determinar_posicion_terminado_en4(int arr[], int n){

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 10 == 4)
        {
           printf("\nPosicion: %d ", i);
        }        
    }
}


void mostrar_posiciones1(int arr[], int n){
    llenar_arreglo2(arr,n);
    printf("\nLas posiciones de los numeros terminados en 4 son: ");
    determinar_posicion_terminado_en4(arr,n);
}
