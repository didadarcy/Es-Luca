/*Esercizio 6
Scrivere un programma in C che legga da tastiera 10 interi 
e li inserisca in un array di 10 elementi.
Scrivere poi una procedura che prenda in input un array 
e la sua dimensione e stampi i valori dell'array per
cui valga una di queste condizioni:
-il valore è maggiore o uguale a 0 e pari
-il valore è negativo, ma l'elemento successivo dell'array 
è positivo.
Chiamare la procedura sull'array letto da tastiera.*/

#include <stdio.h>
void magg(int a[], int dim);
int main ()
{
    int i;
    int a[10];
    for(i=0;i<10;i++)
        scanf("%d", &a[i]);
    magg(a, 10);
    return 0;
}

void magg(int a[], int dim)
{
    int i;
    for(i=0;i<dim;i++)
        if((a[i]>=0 && a[i]%2==0)||(i!=dim-1 && a[i]<0 && a[i+1]>0))
            printf("%d\n", a[i]);
}