/* Esercizio 7
Scrivere un programma in C che legga da tastiera 10 interi 
e li inserisca in un array di 10 elementi. Leggere
inoltre un intero.
Scrivere poi una funzione che prenda in input un array a, 
la sua dimensione e un intero n. Questa funzione
deve restituire:
-1 se n è in a (cioè c'è un indice i per cui a[i] = n)
-0 se n non è in a (cioè per nessun indice i vale a[i] = n).
Stampare il risultato della funzione con parametri in input 
l'array di dimensione 10 e l'intero letto da
tastiera. */

#include <stdio.h>

int in_a(int a[], int dim, int n);
int main()
{
    int n;
    int i;
    int a[10];
    for(i=0; i<10; i++)
        scanf("%d", &a[i]);
    scanf("%d", &n);
    printf("%d\n", in_a(a,10,n));

    return 0;

}
// int in_a(int a[], int dim, int n)
// {
//     int i;
//     for(i=0; i<dim; i++)
//     {
//         if(a[i]==n)
//             return 1;
//     }
//     return 0;

// }
// in questo modo lo accettano a algo ma non a prog

 
int in_a(int a[], int dim, int n)
{
    int t=0;
    int i=0;
    while(t==0 && i<dim)
    {
        if(a[i]==n)
            t=1;
        else
            i++;
    }
    return t;
}
