#include<stdlib.h>
#include<stdio.h>

// array in wich pointes will be saved: arrays are sequences of contiguous locations
int array[20], valore;
// pointers array
int *pointerArray[20];
// pointer
int *pointer;

void printing()
{
	for(int pos = 0; pos < sizeof(array)/sizeof(array[0]); pos++)
	{
		printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n");
		printf("array[%d] = %d, &array[%d] = %p.\n", pos, array[pos], pos, &array[pos]);
		printf("pointerArray[%d] = %p, &pointerArray[%d] = %p.\n ", pos, pointerArray[pos], pos, &pointerArray[pos]);
		//printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n");
	}
};

void workOnPointers()
{
	int valRef;
	// working starting from pointers with values side effect
	for(int pos = 0; pos < sizeof(array)/sizeof(array[0]); pos++)
	{	
		valRef = *pointerArray[pos];
		valRef-=11;
		*pointerArray[pos] = valRef; 
		printf("%d\n",valRef);
	}

};

void fillArray()
{
	for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
	{
		array[i] = i+11;
		pointerArray[i] = &array[i];
	}
};

int main()
{
pointer = &array[0];
valore = *pointer;

printf("Stampa 1\n");
printing();
printf("Rimepimento Array\n");
fillArray();
printf("Stampa 2\n");
printing();
workOnPointers();
printf("Stampa 3\n");
printing();
return 0;
}
