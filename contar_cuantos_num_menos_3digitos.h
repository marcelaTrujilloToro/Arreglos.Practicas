#include <stdio.h>

//11. Leer 10 números enteros, almacenarlos en un vector y determinar de los almacenados allí, tienen menos de 3 dígitos.

void llenar_arreglo11(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("Digite un numero: \n");
        scanf("%d", &arr[i]);
    }    
}

int contar_digitos1(int numero){

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

int contar_numeros1(int arr[], int n){
    int contador =0;

    for (int i = 0; i < n; i++)
    {
        if (contar_digitos1(arr[i])< 3)
        {
            contador ++;
        }
        
    }
    return contador;
}

void imprimir_cantidad_de_menos_3digitos(int arr[], int n){
    llenar_arreglo11(arr, n);
    int contador = contar_numeros1(arr, n);
    printf("La cantidad de elementos con menos de 3 digitos es: %d ", contador);
}