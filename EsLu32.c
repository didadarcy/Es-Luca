/* Esercizio 4
Scrivere un programma in C che legga da tastiera un array di 5 elementi.
Dichiarare inoltre due variabili intere (first_even, last_odd).
Scrivere una procedura che dato l’array e la sua dimensione modifichi il con-
tenuto di first_even e last_odd, inserendovi rispettivamente
• la posizione del primo numero pari contenuto nell’array,
• la posizione dell’ultimo numero dispari contenuto nell’array.
Stampare infine il contenuto di first_even e last_odd. */

#include <stdio.h>
void pos_paridispari(int a[], int dim, int* first_even, int* last_odd);
int main()
{
    int a[5];
    int i;
    int first_even;
    int last_odd;
    for(i=0; i<5; i++)
        scanf("%d", &a[i]);
    pos_paridispari(a, 5, &first_even, &last_odd);
    printf("%d\n%d\n", first_even, last_odd);
    return 0;
}

void pos_paridispari(int a[], int dim, int* first_even, int* last_odd)
{
    int i;
    *first_even=-1;
    *last_odd=-1;
    for(i=0; i<dim; i++)
    {
        if(*first_even==-1 && a[i]%2==0)
            *first_even=i;
        if(a[i]%2!=0)
            *last_odd=i;
    }
}