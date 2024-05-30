#include <stdio.h>
#include "lecturas.h"
#include "operacionesVec.h"

void ingresarNotas(int vector[],int numEstudiantes){
    for(int i=0; i < numEstudiantes; i++){
        vector[i] = leerEnteroEntre("Ingrese una nota entre 1 y 10: \n",1,10);
        //leer datos con scanf
        
    }
}
void mostrarnotas(int cal[], int numestudiantes){
    for (int i = 0; i < numestudiantes; i++){
        printf("\nEstudiante %i.- %i", i+1, cal[i]);
    }
}
float calcularPromedio(const int vector[],int numEstudiantes){
    int suma = 0;
    for(int i = 0; i < numEstudiantes; i++){
        suma +=vector[i];
    }
    return suma/(float)numEstudiantes;
}
int notaMaxima(const int vector[],int numEstudiantes){
    int max = vector[0];
    for(int i = 1; i < numEstudiantes; i++){
        if(max < vector[i]){
            max = vector[i];
        }
    }
    return max;
}
int notaMinima(const int vector[],int numEstudiantes){
     int min = vector[0];
    for(int i = 1; i < numEstudiantes; i++){
        if(min > vector[i]){
            min = vector[i];
        }
    }
    return min;
}
void notasMaxProm(const int vector[], int numEstudiantes, float promedio){
    int prom=0;
    for(int i = 1; i < numEstudiantes; i++){
        if(promedio < vector[i]){
            prom=prom+1;
        }
    }
    printf("\nTotal de notas mayor al promedio: %i", prom);
}
void aprobdesaporb(const int vector[], int numEstudiantes){
    int aprob=0, desaprob=0;
        for(int i = 1; i < numEstudiantes; i++){
            if(6 < vector[i]){
                desaprob=desaprob+1;
            }else(6 >= vector[i]);
                aprob=aprob+1;
        }
}