#include<stdio.h>
#include<stdlib.h>

/*
Le strutture sono degli insiemi di varibili.
Le definiamo all'inizio del codice e poi le istanziamo successivamente.
Il nome dell'istanza possiamo anche metterla dopo la dichiarazione (vedi commento)
L'istanziazione va fatta successivamente ponendo un valore a tutti gli elementi della struttura.

Possiamo usare le strutture assieme alle parole chiave "typedef" per farle diventare dei tipi.
In questo caso diventano molto simili ad un oggetto.
Per dichiarare il nuovo dato consideriamo la struttura e poniamo il nome del tipo alla fine della dichiarazione.
Adesso possiamo creare anche degli array di questo tipo.

E' possibile anche utilizzaredei tipi di dati union per memorizzare tutti i nuovo tipi. In questo modo e' 
possibile selezionare l'instanza giusta di tipo quando necessario
*/

// struttura semplice
struct nomeStruttura
{
char* stringa;
char stringaDimensionata[12];
}; // possiamo anche non mettere il nome

// struttura semplice
struct nomeStruttura2
{
int x,y,z;
}IDStruttura;

// tipo di dato
typedef struct nomeStrutturaUsata // nome della struttura opzionale
{
int intero;
float floating;
}nuovoTipo;

/*********** ENUM (globale) *************/
enum giorni { lun, mar, mer, gio, ven, sab, dom } settimana; //associamo a delle costanti letterali dei valori numerici lun=0...
char *strcat(char *dest, const char *src); // funzione da richiamare per  la concatenazione delle stringhe in C.

/**** printing di enum ****/


const char* getDayName(int day)
{
	switch(day)
	{
	case 0: return "lun, ";
	case 1: return "mar, ";
	case 2: return "mer, ";
	case 3: return "gio, ";
	case 4: return "ven, ";
	case 5: return "sab e ";
        default: return "dom!";
	}
}

void stampaEnum()
{
static char giornate[22];
 for(int intGiornata = lun; intGiornata <= dom; intGiornata++)
   {
    strcat(giornate, getDayName(intGiornata));
    printf("Giorno: %d \n", intGiornata);   
    printf("strcat: %s: \n\t", giornate);
   }
}

/* Il main va sempre messo sotto. In generale vanno sotto le funzioni che richiamano*/
int main()
{
// lavoriamo con la struttura
struct nomeStruttura strutt = {"ciao mondo!", "ciaooooo"};
nuovoTipo nomeTipo;
nomeTipo.intero = 1990;

struct nomeStruttura2 *strutturaPuntatore;
strutturaPuntatore = &IDStruttura;
strutturaPuntatore -> x = 1990; //-> operator to enter in single elements of struct
strutturaPuntatore -> y = 1991;
strutturaPuntatore -> z = 1992;
//nomeTipo.stringa[] = {'a','a','a','\0'};

/********** CASTING ***********/
nomeTipo.floating = 5.664;
char carattere = 'A';
int castingFloat = (int) nomeTipo.floating;
int castingChar =  (int) carattere;

printf("I valori della struttura sono: \n stringa: %s, stringa1: %s \n", strutt.stringa, strutt.stringaDimensionata);
printf("I valori del tipo definito sono: \n intero: %d, float: %f, floatToInt: %d, charToInt: %d \n", nomeTipo.intero, nomeTipo.floating, castingFloat, castingChar);

stampaEnum();

return 0;
}
