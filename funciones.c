#include "funciones.h"
#include "lecturas.h"

void agregarnota(float n[][N], int estudiantes, int examen){
    for (int i = 0; i < estudiantes; i++){
        
        for (int j = 0; j < examen; j++){
            n[i][j]=leerEnteroEntre(("\nIngrese la nota %i del alumno %i: ", j+1, i+1), 1, 10);
        }
    }
    
}

void imprimirnota(const float n[][N], int estudiantes, int examen){
    for (int i = 0; i < estudiantes; i++){
        
        for (int j = 0; j < examen; j++){
            printf("%10.2f", n[i][j]);
        }
        printf("\n");
    }
    
}

void promedioEstudiantes(const float n[][N], int estudiantes, int examen){
    float suma = 0;
    for(int i = 0; i < estudiantes; i++){
        suma=0;
        for (int j = 0; j < examen; j++){
            suma +=n[i][j];
        }
        printf("\nEl promedio del estudiante %i es: %f", i+1, suma/examen);
    }
}

void promedioExamen(const float n[][N], int estudiantes, int examen, float vector[]){
    float suma = 0;
    for(int j = 0; j < examen; j++){
        suma=0;
        for (int i = 0; i < estudiantes; i++){
            suma +=n[i][j];
        }
        vector[j]=suma/examen;
        printf("\nEl promedio del examen %i es: %f", i+1, suma/examen);
    }
}

float MayorNotaExamen(const float vector[], int examen){
    float max
    for(int i = 1; i < numEstudiantes; i++){
        if(max < vector[i]){
            max=vector;
        }
    }
    printf("\nExamen que tuvo mayor promedio de calificación es: %.2f", max);
}
