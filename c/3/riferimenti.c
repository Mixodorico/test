#include<stdio.h>
#include<stdlib.h>

// * serve per considerare il valore
// & considera il riferimento

void stampaPuntatori(int alfa, int beta, int* heapPointer)
{
   printf("alfa -> %d, beta -> %d, pointer -> %p\n", alfa, beta, heapPointer);
}

int main()
{
int alfa = 1990;
int beta = 2019;
int *heapPointer;     // dichiarazione puntatore: i puntatori fanno riferimento allo heap

heapPointer = &alfa;   // assume l'indirizzo di "valore" 
//*heapPointer = alfa; //useless
printf("pointer = &alfa ++ *pointer = alfa\n");
stampaPuntatori(alfa, beta, heapPointer);

heapPointer = &beta;
printf("pointer = &beta\n");
stampaPuntatori(alfa, beta, heapPointer);

alfa = *heapPointer;
printf("alfa = *pointer (quindi il valore di beta)\n");
stampaPuntatori(alfa, beta, heapPointer);

heapPointer = &alfa;
printf("pointer = &alfa (quindi il valore di beta, ma l'indirizzo di alfa)\n");
stampaPuntatori(alfa, *heapPointer, heapPointer);

heapPointer++;
printf("pointer ++: spostiamo il puntatore in acanti di una posizione (4 byte xk intero)\n");
stampaPuntatori(alfa, beta, heapPointer);

//free(heapPointer);
return 0;
}
