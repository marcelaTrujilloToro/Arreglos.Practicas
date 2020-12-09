#include <stdio.h>
#include <stdbool.h>

//2. Leer 10 enteros, almacenarlos en un vector y determinar en qué posición del vector está el mayor número par leído.

void llenar_arreglo6(int arr[], int n){

    for (int i = 0; i < n; i++)
    {
        printf("Digite un numero: ");
        scanf("%d", &arr[i]);
    }    
}

bool determinar_si_par(int num){
    bool par = false;
    if (num % 2 == 0)
    {
        par= true;
    }
    return par;
    
}

int determinar_posicion_mayor(int arr[], int n){
    int posicion =0;
    int mayor = arr[0];
    
    for (int i = 1; i < n; i++)
    {
        
        if (arr[i]> mayor && determinar_si_par(arr[i])== true)
        {
            mayor = arr[i];

            posicion = i;
        }        
    }
    return posicion;    
}

void imprimir_posicion_mayor(int arr[], int n){
    llenar_arreglo6(arr, n);
    int posicion = determinar_posicion_mayor(arr, n);
    printf("La posicion de mayor numero par es: %d ", posicion);

}