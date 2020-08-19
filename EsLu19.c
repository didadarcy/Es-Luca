
/*Esercizio 9
Scrivere un programma in C che legga da tastiera 10 interi e li inserisca in un
array di 10 elementi.
Scrivere poi una funzione che prenda in input un array e la sua dimensione.
Questa funzione deve restituire la media di tutti gli elementi della sequenza
diversi da 0 e di segno uguale all’ultimo elemento della sequenza.
Chiamare la funzione sull’array e stamparne il risultato.
NB: la funzione deve essere restituire la media, fai attenzione ai tipi.*/

#include <stdio.h>
float media(int a[], int dim);
int main()
{
    int i;
    int a[10];
    for(i=0;i<10;i++)
        scanf("%d", &a[i]);
    printf("%f\n", media(a,10));
    return 0;   
}

float media(int a[], int dim)
{
    float m=0;
    int s=0; // somma elementi media
    int n=0; // numero elementi media
    int i;
    for(i=0;i<dim;i++)
    {
        if(a[i]!=0 && ((a[dim-1]>0 && a[i]>0) || (a[dim-1]<0 && a[i]<0)))
        {   s=s+a[i];
            n++;
        }
    }
    m=(float)s/(float)n;
    
    return m;
}