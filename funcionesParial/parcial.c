#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parcial.h"

float aplicarDescuento( float precio )
{
    float descuento;
    float precioConDescuento;

    descuento = (precio*5)/100;

    precioConDescuento = precio - descuento;

    return precioConDescuento;

}

int contarCaracteres(char cadena[],int tam, char caracter)
{
    int cantidad = 0;
   if(cadena != NULL && tam>0 )
   {
       for(int i = 0; i>tam; i++)
       {
           if(cadena[i] == caracter)
           {

               cantidad++;
           }

       }

   }

   return cantidad;
}

int ordenarArray(eNotebook list[], int tam)
{
    int ok = 0;
    eNotebook auxNotebook;

    if( list != NULL && tam > 0)
    {
        for(int i=0; i < tam - 1; i++)
        {
            for(int j= i+1; j < tam; j++)
            {   if(list[i].marca != list[j].marca)
                {
                    if( strcmp(list[i].marca, list[j].marca) > 0 )
                    {
                        auxNotebook = list[i];
                        list[i] = list[j];
                        list[j] = auxNotebook;
                    }
                }
                else
                {
                    if(list[i].precio> list[j].precio)
                    {
                        auxNotebook = list[i];
                        list[i] = list[j];
                        list[j] = auxNotebook;

                    }

                }


            }
        }
        ok = 1;
    }
    return ok;
}

