#ifndef PARCIAL_H_INCLUDED
#define PARCIAL_H_INCLUDED

typedef struct
{
    int id;
    char procesador [10];
    char marca[20];
    float precio;

}eNotebook;

#endif // PARCIAL_H_INCLUDED
float aplicarDescuento( float precio );
int contarCaracteres(char cadena[],int tam, char caracter);
int ordenarArray(eNotebook vec[], int tam);
