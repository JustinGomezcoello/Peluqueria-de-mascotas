#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "funciones.h"

char nombre[10][25], tipo[10][25], edad[10][25], dueno[10][25], id[10][25];
int cont[10];
float Mascotas = 0;

int main(int argc, char *argv[])
{
    char opcion;

    while (1)
    {
        printf("\tMenu");
        printf("\na. Ingreso Mascota");
        printf("\nb. Servicios");
        printf("\nc. Facturar Servicios");
        printf("\nd. Salir");
        printf("\nSeleccione una opcion: ");
        opcion = getchar();
        fflush(stdin);

        switch (opcion)
        {
        case 'a':
            calcularMascotas(&Mascotas, id, nombre, tipo, edad, dueno);
            break;
        case 'b':
            calcularServicio(cont, Mascotas, nombre);
            break;
        case 'c':
            facturarServicios(cont, Mascotas, nombre);
            break;
        case 'd':
            return 0;
        default:
            printf("No entendemos la opcion\n");
        }
    }

    return 0;
}