#ifndef FUNCIONES_H
#define FUNCIONES_H

void calcularMascotas(float *Mascotas, char id[10][25], char nombre[10][25], char tipo[10][25], char edad[10][25], char dueno[10][25]);
void calcularServicio(int *cont, float Mascotas, char nombre[10][25]);
void facturarServicios(int cont[10], float Mascotas, char nombre[10][25]);

#endif