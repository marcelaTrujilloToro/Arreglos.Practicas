#include <stdio.h>
#include <stdlib.h>
#include "determinar_posicion_del_mayor.h"
#include "posicion_del_mayor_num_par.h"
#include "posicion_mayor_primo.h"
#include "fibonacci.h"
#include "primos_entre_100_300.h"
#include "posiciones_num_mayor.h"
#include "posiciones_num_terminan_4.h"
#include "cuantas_veces-esta_mayor.h"
#include "posiciones_de_num_3digitos.h"
#include "contar_cuantos_num_menos_3digitos.h"

#define OPCION_SALIR 11

void posicion_mayor()
{
    int n = 10;
    int *arr = malloc(n * sizeof(int));
    mostrar_posicion_mayor(arr, n);
}

void posicion_mayor_par()
{
    int n = 10;
    int *arr = malloc(n * sizeof(int));
    imprimir_posicion_mayor(arr, n);
}

void posicion_mayor_primo()
{
    int n = 10;
    int *arr = malloc(n * sizeof(int));
    imprimir_posicion_mayor_primo(arr, n);
}

void serie_fibonacci()
{
    int n = 10;
    int *arr = malloc(n * sizeof(int));
    imprimir_arr(arr, n);
}

void primos_entre100_300()
{
    int n = 10;
    int *arr = malloc(n * sizeof(int));
    imprimir_nums_primos(arr, n);
}

void posiciones_del_mayor()
{
    int n = 10;
    int *arr = malloc(n * sizeof(int));
    imprimir_posiciones(arr, n);
}

void posiciones_terminado_4()
{
    int n = 10;
    int *arr = malloc(n * sizeof(int));
    mostrar_posiciones(arr, n);
}

void cuantas_veces_esta_el_mayor()
{
    int n = 10;
    int *arr = malloc(n * sizeof(int));
    imprimir_veces_num_mayor(arr, n);
}

void posiciones_mas_3_digitos()
{
    int n = 10;
    int *arr = malloc(n * sizeof(int));
    mostrar_posiciones1(arr, n);
}

void contar_tienen_menos_3digitos()
{
    int n = 10;
    int *arr = malloc(n * sizeof(int));
    imprimir_cantidad_de_menos_3digitos(arr, n);
}

int main()
{
    int opcion = 0;
    do
    {
        printf("\nMENU\n");
        printf("1. Determinar en que posicion esta el numero mayor\n");
        printf("2. Determinar en que posicion esta el mayor numero par\n");
        printf("3. Determinar en que posicion esta el mayor numero primo\n");
        printf("4. Imprimir los 10 primeros numero de la serie Fibonacci\n");
        printf("5. Mostrar los primeros 10 primos entre 100 y 300\n");
        printf("6. Mostrar las posiciones donde se encuentra el numero mayor\n");
        printf("7. Mostrar en que posiciones estan los numeros terminados en 4\n ");
        printf("8. Contar cuantas veces esta el numero mayor en el arreglo\n");
        printf("9. Mostrar en que posiciones estan los numero con mas de 3 digitos\n");
        printf("10. Contar cuantos de los numeros del arreglo tienen mas de 3 digitos\n");
        printf("11. Salir\n");

        printf("Digite una opcion:");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            posicion_mayor();
            break;
        case 2:
            posicion_mayor_par();
            break;
        case 3:
            posicion_mayor_primo();
            break;
        case 4:
            serie_fibonacci();
            break;
        case 5:
            primos_entre100_300();
            break;
        case 6:
            posiciones_del_mayor();
            break;
        case 7:
            posiciones_terminado_4();
            break;
        case 8:
            cuantas_veces_esta_el_mayor();
            break;
        case 9:
            posiciones_mas_3_digitos();
            break;
        case 10:
            contar_tienen_menos_3digitos();
            break;
        }
    } while (opcion != OPCION_SALIR);
}
