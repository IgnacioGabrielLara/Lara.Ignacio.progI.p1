#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include"parcial.h"

#define TAM 5
int main()
{
    char cadena[15] = "Computadora";

    eNotebook note[TAM];
     aplicarDescuento( 10 );

    contarCaracteres(cadena,10, 'a');

    ordenarArray(note, TAM);


    return 0;
}


