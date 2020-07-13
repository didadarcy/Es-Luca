/* Esercizio 2
Scrivere un programma in C che legga da tastiera 10 interi e 
li inserisca in un array di 10 elementi.
Scrivere poi una procedura che prenda in input un array e 
la sua dimensione e stampi i numeri pari contenuti 
nell'array, scrivendo un intero per riga. */

#include <stdio.h> 

void pari(int a[], int dim);
int main ()
{
    int i;
    int a[10];
    for(i=0; i<10; i++)
        scanf("%d", &a[i]);
    pari(a, 10);
    return 0;
}

void pari(int a[], int dim)
{   
    int i;
    for(i=0; i<10; i++)
        if(a[i]%2==0)
            printf("%d\n", a[i]);
}

