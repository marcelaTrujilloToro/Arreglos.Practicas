#include <stdio.h>
#include <stdbool.h>

// 3. Leer 10 enteros, almacenarlos en un vector y determinar en qué posición del vector está el mayor número primo leído.

void llenar_arreglo5(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("Digite un numero: ");
        scanf("%d", &arr[i]);
    }    
}

bool determinar_primo1(int numero){
    
    int contador = 0;
    bool primo = false;

    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            contador ++;
        }        
    }
    if (contador == 2)
    {
        primo = true;
    }
    return primo;    
}

int determinar_posicion_mayor_primo(int arr[], int n){
    int posicion =0;
    int mayor = arr[0];

    for (int i = 1 ; i < n; i++)
    {
        if (arr[i] > mayor && determinar_primo1(arr[i]) == true)
        {
            mayor = arr[i];
            posicion =i;
        }
        
    }
    return posicion; 
}

void imprimir_posicion_mayor_primo(int arr[], int n){
    llenar_arreglo5(arr, n);
    int posicion = determinar_posicion_mayor_primo(arr, n);
    printf("La posicion del mayor numero pirmo es: %d", posicion);
}