#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5  


struct compu {
    int velocidad;         
    int anio;              
    int cantidad_nucleos;  
    char *tipo_cpu;        
};


char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};





int generarAleatorio(int min, int max);
void mostrarMasVieja(struct compu pcs[], int cantidad);
void mostrarMasVeloz(struct compu pcs[], int cantidad);

int main() {
   
    srand(time(NULL));

  
    struct compu pcs[N];

  
    
    return 0;
}
void mostrarMasVeloz(struct compu pcs[], int cantidad) {
    int indice_rapida = 0;
    for (int i = 1; i < cantidad; i++) {
        if (pcs[i].velocidad > pcs[indice_rapida].velocidad) {
            indice_rapida = i;
        }
    }

    printf("La PC más veloz es:\n");
    printf("  Velocidad: %d GHz\n", pcs[indice_rapida].velocidad);
    printf("  Anio de fabricacion: %d\n", pcs[indice_rapida].anio);
    printf("  Cantidad de nucleos: %d\n", pcs[indice_rapida].cantidad_nucleos);
    printf("  Tipo de CPU: %s\n", pcs[indice_rapida].tipo_cpu);
    printf("\n");
}

void mostrarMasVieja(struct compu pcs[], int cantidad) {
    int indice_vieja = 0;
    for (int i = 1; i < cantidad; i++) {
        if (pcs[i].anio < pcs[indice_vieja].anio) {
            indice_vieja = i;
        }
    }

    printf("La PC más vieja es:\n");
    printf("  Velocidad: %d GHz\n", pcs[indice_vieja].velocidad);
    printf("  Año de fabricacion: %d\n", pcs[indice_vieja].anio);
    printf("  Cantidad de nucleos: %d\n", pcs[indice_vieja].cantidad_nucleos);
    printf("  Tipo de CPU: %s\n", pcs[indice_vieja].tipo_cpu);
    printf("\n");
}
void listarPCs(struct compu pcs[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        printf("PC %d:\n", i + 1);
        printf("  Velocidad: %d GHz\n", pcs[i].velocidad);
        printf("  Año de fabricacion: %d\n", pcs[i].anio);
        printf("  Cantidad de nucleos: %d\n", pcs[i].cantidad_nucleos);
        printf("  Tipo de CPU: %s\n", pcs[i].tipo_cpu);
        printf("\n");
    }
}
int generarAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}