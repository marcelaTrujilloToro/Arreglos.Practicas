#include <stdio.h>

//4. Cargar un vector de 10 posiciones con los 10 primeros elementos de la serie de Fibonacci y mostrarlo en pantalla.

void llenar_arreglo8(int arr[], int n){
    
    arr[0] = 0;
    arr[1] = 1;

    printf("%d \n%d", arr[0], arr[1]);

    for (int i = 2; i < n; i++)
    {
        arr[i] = arr[i-2] + arr[i-1];
        printf("\n%d", arr[i]);
    
    }    
}

void imprimir_arr(int arr[], int n){
    printf("Estos son los primeros 10 numeros de la serie Fibonacci: \n");
    llenar_arreglo8(arr, n);
    
}
