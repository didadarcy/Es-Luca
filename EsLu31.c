/* Esercizio 3
Scrivere un programma in C che legga da tastiera un array di 5 elementi.
Dichiarare inoltre due variabili pos_max e pos_min, di tipo intero.
Scrivere una procedura che modifica i valori di pos_max e pos_min inserendovi
dentro la posizione del massimo e del minimo dell’array che viene passato come
argomento.
Stampare i valori contenuti in pos_max e pos_min. */

#include <stdio.h>
void posmaxmin(int a[], int dim, int* pos_max, int* pos_min);
int main()
{
    int a[5];
    int i;
    int pos_max;
    int pos_min;
    for(i=0; i<5; i++)
        scanf("%d", &a[i]);
    posmaxmin(a, 5, &pos_max, &pos_min);
    printf("%d\n%d\n", pos_max, pos_min);
    return 0;
}

void posmaxmin(int a[], int dim, int* pos_max, int* pos_min)
{
    int i;
    *pos_max=0;
    *pos_min=0;
    for(i=1; i<dim; i++)
    {
        if(a[*pos_max]<a[i])
            *pos_max=i;
        if(a[*pos_min]>a[i])
            *pos_min=i;
    }
}