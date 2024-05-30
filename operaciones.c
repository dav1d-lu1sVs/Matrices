#include <stdio.h>
#include <math.h>
#include "operaciones.h"
#include "lecturas.h"

void ingresarNotas(int cal[], int numEstu){
    for (int i = 0; i < numEstu; i++){
        cal[i]=leerEnteroEntre("Ingrese una nota entre 1 y 10: \n", 1 ,10);
    }
}

float calcularPromedio(int cal[], int numEstu){
    int i=0, suma;
    while(i < numEstu){
        suma=cal[i]+suma;
        i++;
    }
    return (float)suma/numEstu;
}

float notamaxima(int cal[], int numEstu){
    int max;
    for (int i = 0; i < numEstu; i++){
        if(cal[i]>max){
            max=cal[i];
        }
    }
    return max;
}

float notaminima(int cal[], int numEstu){
    int min;
    for (int i = 0; i < numEstu; i++){
        if(cal[i]<min){
            min=cal[i];
        }
    }
    return min;
}

