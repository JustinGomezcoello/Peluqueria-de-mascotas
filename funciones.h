#ifndef FUNCIONES_H
#define FUNCIONES_H

void calcularMascotas(float *Mascotas, char id[][25], char nombre[][25], char tipo[][25], char edad[][25], char dueno[][25]);
void calcularServicio(int *cont, float Mascotas, char nombre[][25]);
void facturarServicios(int cont[10], float Mascotas, char nombre[][25]);

#endif