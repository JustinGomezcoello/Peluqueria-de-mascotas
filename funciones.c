#include "funciones.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void calcularMascotas(float *Mascotas, char id[][25], char nombre[][25], char tipo[][25], char edad[][25], char dueno[][25])
{
    float mascotas;
    printf("\nCuantas mascotas desea ingresar: ");
    scanf("%f", &mascotas);
    fflush(stdin);
    *Mascotas = mascotas;
    for (int i = 0; i < mascotas; i++)
    {
        printf("\nIngrese el id de la mascota:");
        scanf("%s", id[i]);
        printf("\nIngrese el nombre de la mascota:");
        scanf("%s", nombre[i]);
        fflush(stdin);
        printf("\nIngrese el tipo de  mascota:");
        scanf("%s", tipo[i]);
        fflush(stdin);
        printf("\nIngrese la edad de la mascota:");
        scanf("%s", edad[i]);
        fflush(stdin);
        printf("\nIngrese el nombre del dueno de la mascota:");
        scanf("%s", dueno[i]);
        fflush(stdin);
        system("cls");
    }
}

void calcularServicio(int *cont, float Mascotas, char nombre[][25])
{
    for (int i = 0; i < Mascotas; i++)
    {
        char opcion;
        int salir = 0;
        printf("\nQue servicio quisiera contratar para %s ", nombre[i]);

        while (!salir)
        {
            printf("\na.- Corte de pelo ");
            printf("\nb.- Desparasitar ");
            printf("\nc.- Bano ");
            printf("\nd.- Salir ");
            
            opcion = getchar();
            fflush(stdin);
            char compra;

            switch (opcion)
            {
            case 'a':
                printf("\nSERVICIO ID: 15673843\n");
                printf("\nEste tiene un costo de $10 y incluye un panuelo de regalo");
                printf("\nDesea adquirirlo? s o n \n");
                scanf("%c", &compra);
                fflush(stdin);
                if (compra == 's')
                {
                    cont[i] = 10;
                }
                system("cls");
                break;
            case 'b':
                printf("\nSERVICIO ID: 34646575\n");
                printf("\nEste tiene un costo de $15 ");
                printf("\nDesea adquirirlo? s o n: \n");
                scanf("%c", &compra);
                fflush(stdin);
                if (compra == 's')
                {
                    cont[i] += 15;
                }
                system("cls");
                break;
            case 'c':
                printf("\nSERVICIO ID: 674584358\n");
                printf("\nEste tiene un costo de $12 ");
                printf("\nDesea adquirirlo? s o n: \n");
                scanf("%c", &compra);
                fflush(stdin);
                if (compra == 's')
                {
                    cont[i] += 12;
                }
                system("cls");
                break;
            case 'd':
                salir = 1;
                system("cls");
                break;
            default:
                printf("No entendemos la opcion\n");
            }
        }
    }
}

void facturarServicios(int cont[10], float Mascotas, char nombre[][25])
{
    char mascota2[25];
    while (1)
    {
        char opcion;
        printf("\nSeleccione una opcion:\n ");
        printf("a.- Ingrese el nombre de la mascota: \n");
        printf("b.- Salir \n");
        opcion = getchar();
        fflush(stdin);

        switch (opcion)
        {
        case 'a':
            scanf("%s", mascota2);
            fflush(stdin);
            for (int i = 0; i < Mascotas; i++)
            {
                if (strcmp(mascota2, nombre[i]) == 0)
                {
                    printf("\nEl valor a pagar es de: %d\n", cont[i]);
                    break;
                }
            }
            break;
        case 'b':
            return;
        default:
            printf("No entendemos la opcion\n");
        }
    }
}