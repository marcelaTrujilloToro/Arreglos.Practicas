#include <stdio.h>
//10. Leer 10 números enteros, almacenarlos en un vector y determinar en qué posiciones se  encuentran los números con mas de 3 dígitos.

void llenar_arreglo4(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("Digite un numero: \n");
        scanf("%d", &arr[i]);
    }    
}

int contar_digitos(int numero){

    int digito=0;
    int contador=0;

    while (numero != 0)
    {
        digito = numero %10;
        numero = numero /10;
        contador++;
    }
    return contador;
}

void determinar_posicion1(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        if (contar_digitos(arr[i])> 3)
        {
            printf("\nPosicion: %d ", i);
        }        
    }    
}

void mostrar_posiciones(int arr[], int n){
    llenar_arreglo4(arr, n);
    printf("\nLas posiciones de los numeros con mas de 3 digitos son: ");
    determinar_posicion1(arr, n);
}