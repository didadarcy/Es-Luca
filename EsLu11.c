/* Esercizio 1
Scrivere un programma in C che legga da tastiera 10 interi e 
li inserisca in un array di 10 elementi.
Scrivere poi una procedura che prenda in input un array e 
la sua dimensione e stampi il contenuto
dell'array, scrivendo un intero per riga. */

#include <stdio.h>

void arr(int a[], int dim);
int main()
{
    int i;
    int a[10];
    for(i=0;i<10;i++)
        scanf("%d", &a[i]);
    arr(a, 10);
    return 0;
}

void arr(int a[], int dim)
{
    int i;
    for(i=0;i<10;i++)
        printf("%d\n", a[i]);
}