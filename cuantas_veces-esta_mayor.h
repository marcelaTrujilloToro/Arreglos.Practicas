# include <stdio.h>
// 9. Leer 10 números enteros, almacenarlos en un vector y determinar cuántas veces está repetido el mayor.

void llenar_arreglo10(int arr[], int n){

    for (int i = 0; i < n; i++)
    {
        printf("Digite un numero:");
        scanf("%d", &arr[i]);
    }    
}

int identificar_mayor(int arr[], int n){

    int mayor = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > mayor)
        {
            mayor = arr[i];
        }        
    }
    return mayor;    
}

int contar_veces_del_mayor(int arr[], int n, int mayor){
    
    int contador=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == mayor)
        {
            contador ++;
        }
        
    }
    return contador;
}

void imprimir_veces_num_mayor(int arr[], int n){
    llenar_arreglo10(arr, n);
    int mayor = identificar_mayor(arr, n);
    int contador = contar_veces_del_mayor(arr, n, mayor);
    printf ("El numero mayor del arreglo es: %d y esta en %d veces ", mayor, contador);
}