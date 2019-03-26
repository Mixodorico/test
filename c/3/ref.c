#include<stdio.h>
#include<stdlib.h>

struct tipoStruttura
{
int sommaRandom;
}nomeStruttura;

int somma(int c)
{
    nomeStruttura.sommaRandom = 1990;
    return c+1 + nomeStruttura.sommaRandom;
}

void somma2(int* c, int** vector)
{
    int* vector2;
    *c = 50;
    vector2 = (int*)calloc(*c, sizeof(int));
    vector2[0] = 1;

    for(int i = 0; i < 50; i++)
    {
        printf("posizione: %d: %d\n", i, vector2[i]);
    }
    *vector = vector2;
}
 
int main()
{
    int a = 5;
    int b;
    int* vector;
    b = somma(a);
    printf("Pigliati sto out: %d \n", b);

    somma2(&a, &vector); 
    
    for(int i = 0; i < 50; i++)
    {
        printf("posizione: %d: %d\n", i, vector[i]);
    }
    
    free(vector);
    return 0;
}

