/*Esercizio 13
Scrivere un programma in C che legga da tastiera 10 interi e inserisca i primi 5
nell’array a e gli altri nell’array b. Dichiarare inoltre un terzo array c, sempre
di 5 elementi.
Scrivere poi una procedura che per ogni indice 0 ≤ i < 5 calcola il massimo tra
a[i] e b[i] e lo inserisce in c[i].
Stampare l’array c al termine del processo.*/

#include <stdio.h>

void max_ab(int a[], int b[], int c[], int dim);
int main()
{
    int a[5];
    int b[5];
    int c[5];
    int i;
    for(i=0; i<5; i++)
        scanf("%d", &a[i]);
    for(i=0; i<5; i++)
        scanf("%d", &b[i]);
    max_ab(a, b, c, 5);
    for(i=0; i<5; i++)
        printf("%d\n", c[i]);
    return 0;

}
void max_ab(int a[], int b[], int c[], int dim)
{
    int i;
    for(i=0; i<dim; i++)
    {
        if(a[i]>b[i])
            c[i]=a[i];
        else
            c[i]=b[i];
    }
}