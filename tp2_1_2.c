#include <stdio.h>
#include <stdlib.h>
#define N 20

int main(){
    int i;
    double vt[N];
    double *punt = vt;

    for(i = 0;i < N; i++)
    {
        vt[i]= 1 + rand()% (100 + 1 -1);

        printf("%f \n", vt[i]);
    }
    printf("\nRecorro arreglo con notacion de punteros:");
    for (int a = 0; a < N; a++)    
    {
        printf("\nposicion %d = %f",a+1,*punt);
        punt++;
    }
    

    return 0;
}


