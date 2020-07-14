/* Esercizio 5
Scrivere un programma in C che legga da tastiera 10 interi e 
li inserisca in un array di 10 elementi.
Scrivere poi una procedura che prenda in input un array e 
la sua dimensione e stampi il contenutondell'array in 
ordine inverso, scrivendo un intero per riga.
Chiamare la procedura sull'array letto da tastiera. */

#include <stdio.h>

void inverso(int a[], int dim);
int main ()
{
    int i;
    int a[10];
    for(i=0;i<10;i++)
        scanf("%d", &a[i]);
    inverso(a, 10);
    return 0;

}

void inverso(int a[], int dim)
{
    int i;
    for(i=dim-1;i>-1;i--) //for(i=dim-1;i>=0;i--)
    {   
        printf("%d\n", a[i]);
    }
}