/* Esercizio 11
Scrivere un programma in C che legga da tastiera 10 interi e inserisca i primi 5
nell’array a e gli altri nell’array b.
Scrivere poi una funzione che controlla se esiste un elemento dell’array a mi-
nore di tutti gli elementi dell’array b; se esiste restituisce l’indice dell’elemento,
altrimenti restituisce -1.
Stampare il risultato della funzione.*/


#include <stdio.h>
int check(int a[], int b[], int dim);
int main()
{
    int a[5];
    int b[5];
    int i;
    for(i=0; i<5; i++)
        scanf("%d", &a[i]);
    for(i=0; i<5; i++)
        scanf("%d", &b[i]);
    printf("%d\n", check(a, b, 5));
    return 0;
}
int check(int a[], int b[], int dim)
{
    int trovato=-1;
    int y=0; //indice a
    int i;
    int ok; // e' uguale a 1 fino a quando la condizione a[y]<b[i] e' verificata
    while(y<dim && trovato==-1)
    {
        ok = 1;
        i=0;
        // for(i=0; i<dim; i++) // secondo array
        while(i<dim && ok==1) // secondo array
        {
            if(a[y]>=b[i]) // se la condizione NON e' verificata
            {
                ok = 0;
            }
            i++;
        }
        if(ok==1)
            trovato=y;
        y++;
    }
    return trovato;
}