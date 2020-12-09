#include <stdio.h>

//7.Leer 10 números enteros, almacenarlos en un vector y determinar en qué posiciones se encuentra el número mayor.

void llenar_arreglo3(int arr[], int n){
    
    for (int i = 0; i < n; i++)
    {
        printf("Digite un numero: \n");
        scanf("%d", &arr[i]);
    }    
}

int num_mayor(int arr[], int n){
    
    int mayor = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i]> mayor)
        {
            mayor = arr[i];
        }            
    } 
    return mayor;    
}

void determinar_posiciones(int arr[], int n, int mayor){

    for (int i = 0; i < n; i++)
    {
        if (arr[i]== mayor)
        {
            printf("\nPosicion: %d ", i);
        }        
    }    
}

void imprimir_posiciones(int arr[], int n){

    llenar_arreglo3(arr, n);
    int mayor = num_mayor(arr, n);
    printf("\nEl numero mayor del arreglo es: %d, y esta en la: ", mayor);
    determinar_posiciones(arr, n , mayor);

}