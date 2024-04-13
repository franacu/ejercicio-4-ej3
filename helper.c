//
// Created by Fran on 12/04/2024.
//

#include "helper.h"

//tengo numero_1=1 numero_2=4 a=10 b=numero_2=4
//cuando se llama la funcion suma. Lo que hace es que dentro
//cuando diga a=10, se modifica en otra direccion de memoria...distinta a la del numero_1 .
//entonces no es bueno para optimizar el codigo
//para optimizar esto, lo pasamos por referencia(le digo donde lo tiene que buscar)
//
#include "helper.h"
int suma(int *pA,int *pB)
{
    *pA=10;
    return *pA + *pB;
}

