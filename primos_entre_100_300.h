# include <stdio.h>
#include <stdbool.h>

//5. Almacenar en un vector de 10 posiciones los 10 números primos comprendidos entre 100 y 300. Luego mostrarlos en pantalla.

bool determinar_num_primo(int numero){

    int primo = false;
    int contador = 0;

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

void llenar_arr1(int arr[], int n){
    int cant = 0;
    for (int i = 101; i < 300; i++)
    {
        if (determinar_num_primo(i)== true)
        {
            arr[cant] = i;
            cant++;
        }
                
    }         
}

void imprimir_nums_primos(int arr[], int n){
    printf("Estos son los primeros 10 numeros primos entre 100 y 300\n");
    llenar_arr1(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("\n%d", arr[i]);
    }    
}