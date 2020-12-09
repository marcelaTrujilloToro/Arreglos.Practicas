#include <stdio.h>

//1. Leer 10 enteros, almacenarlos en un vector y determinar en qué posición del vector está el mayor número leído.

void llenar_arreglo9(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("Digite un numero: ");
        scanf("%d", &arr[i]);
    }
    
}

int determinar_posicion(int arr[], int n){

    int posicion =0;
    int mayor = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > mayor)
        {
            mayor = arr[i];
            posicion = i;
        }        
    }
    return posicion;
}

void mostrar_posicion_mayor(int arr[], int n){
    llenar_arreglo9(arr, n);
    int posicion = determinar_posicion(arr, n);
    printf("La posicion del numero mayor es: %d ", posicion);
}