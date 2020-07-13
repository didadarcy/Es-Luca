/* Esercizio 3
Scrivere un programma in C che legga da tastiera 10 interi 
e li inserisca in un array di 10 elementi.
Scrivere poi una funzione che prenda in input un array 
e la sua dimensione e calcoli la somma degli interi
contenuti nell'array. Il risultato deve essere restituito 
alla funzione chiamante (il main), che deve provvedere
a stamparlo. */

#include <stdio.h>

int somma(int a[], int dim);

int main()
{
    int i;
    int a[10];
    for(i=0; i<10; i++)
        scanf("%d", &a[i]);
    printf("%d\n", somma(a, 10));


    return 0;
}

int somma(int a[], int dim)
{
    int s=0;
    int i;
    for(i=0; i<10; i++)
        s=s+a[i]; //s+=a[i]
    return s;
}