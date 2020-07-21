/* Esercizio 8
Scrivere un programma in C che legga da tastiera 10 interi 
e li inserisca in un array di 10 elementi. Leggere inoltre 
un intero.
Scrivere poi una procedura che prenda in input un array a, 
la sua dimensione e un intero n. Questa procedura deve 
stampare tutti i numeri dell'array che sono strettamente 
maggiori dell'intero n.
Chiamare la procedura sull'array e l'intero letto da tastiera.
*/

#include <stdio.h>
void maggiori(int a[], int dim, int n);
int main()
{
    int n;
    int i;
    int a[10];
    for(i=0; i<10; i++)
        scanf("%d", &a[i]);
    scanf("%d", &n);
    maggiori(a, 10, n);

    return 0;
}

void maggiori(int a[], int dim, int n)
{
    int i;
    for(i=0; i<dim; i++)
    {
        if(a[i]>n)
            printf("%d\n", a[i]);
    }
}