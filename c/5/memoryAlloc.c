#include<stdio.h>
#include<stdlib.h>
#include<malloc.h> // library to (de)allocate dinamically memory

int main(int argc, char * argv[]) //argc=numargs, argv = arguments
{
int numero, *array;
int allocati;
numero = 100;

if(argc < 2)
{
	printf("Non ci sono argomenti!\n");
}
else
{
	char *p;
	printf("I suppose one argument!\n");
	printf("argv[1]: %d\n", *argv[1]);
	long conv = strtol(argv[1], &p, 10);
	//numero = (sizeof(int)) * (*argv[1]);
	printf("numero: %d\n", numero);
}

printf("Numero degli elementi dell'array: %d\n", numero);

array = (int *) malloc(sizeof(int) * numero);

/*exception*/
if(array == NULL)
{
	printf("Errore: Memoria esaurita\n");
	exit(1);
}

allocati = sizeof(int) * numero; //alloco la memoria esatta sullo HEAP

for(int pos = 0; pos < numero; pos++)
{
	array[pos] = pos;
}

printf("Valori degli Elementi:\n");
for(int pos = 0; pos < numero; pos++)
{
	printf("Inserito valore: %6d%c\n", array[pos], (pos%10 == 9)?'\n':' '); //%6d = minimum number of digits printed
}
printf("\n\nNumero elementi %d\n", numero);
printf("Dimensione elemento %d\n", sizeof(int));
printf("Bytes allocati %d\n", allocati);
free(array);
printf("\nMemoria Liberata!\n");
return 0;
}
