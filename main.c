#include <stdio.h>

#include "helper.h"
#include "stdlib.h"

int main() {
    int numero_1 = 1;
    int numero_2 = 4;
    int *notas = NULL;  //inicialmente va a haber basura, con el NULL "limpias" y no hay nada en el puntero
    // en esa direccion de memoria
    int capacidadAlumnos = 0;

    printf("Ingrese la cantidad de alumnos tienen:");
    scanf("%d", &capacidadAlumnos);
    notas = malloc(sizeof(capacidadAlumnos)); //le damos un espacio reservado a notas con capacidad capacidadAlumnos
    //como vamos a ir llenando este vector
    for (int i = 0; i < capacidadAlumnos; i++) {
        printf("Ingrese nota del alumno %d:", i + 1);
        //scanf("%d",(notas+i));      notas+i se el saca el &,xq notas+i ya seria una direccion de memoria
        scanf("%d",
              &notas[i]);      //aca es un puntero en una posicion que para mostrar en pantalla se tiene q pone// r &

    }

    printf("la suma es %d", suma(&numero_1, &numero_2));
    //se pone & xq cuando la "funcion suma" apunto a pA y pB y le obtuvo los enteros...los utilizo
    //pero los devuelve como direcciones de memoria ya que no se sabe lo que la funcion suma les modifico
    //un ejemplo es cuando *pA=10

    return 0;
}