/*  Esercizio 4
Scrivere un programma in C che legga da tastiera 10 interi e 
li inserisca in un array di 10 elementi.
Scrivere poi una funzione che prenda in input un array e 
la sua dimensione e calcoli la media dei numeri
positivi (maggiori di 0) contenuti nell'array. Il risultato 
deve essere restituito alla funzione chiamante (il
main), che deve provvedere a stamparlo.
*/

#include <stdio.h>
float media(int a[], int dim);
int main()
{
    int i;
    int a[10];
    for(i=0; i<10; i++)
        scanf("%d", &a[i]);
    printf("%f\n", media(a, 10));
    return 0;
}

float media(int a[], int dim)
{
    int i;
    int m=0;
    int s=0;
    for(i=0; i<dim; i++)
        if(a[i]>0)
        {
            m=m+a[i];
            s++;
        }
    return (float)m/(float)s;
}

