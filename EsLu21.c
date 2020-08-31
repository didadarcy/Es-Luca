/* Esercizio 11
Scrivere un programma in C che legga da tastiera 10 interi e inserisca i primi 5
nell’array a e gli altri nell’array b.
Scrivere poi una funzione che controlla se esiste un elemento dell’array a mi-
nore di tutti gli elementi dell’array b; se esiste restituisce l’indice dell’elemento (se ce ne
sta piu' di uno restituisce l'indice del primo), altrimenti restituisce -1.
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
    int y=0; // indice a[] + condizione iniziale while per a
    int i; //indice b[]
    int trovato=-1; //ho trovato l'elemento?
    int ok; //la condizione e' verificata?
    while(y<dim && trovato==-1) // condizione finale while per a + elemento non trovato
    {   
        ok=1; //non ho ancora fatto nulla quindi la cond e' verificata
        i=0; //condizione iniziale while per b
        while(i<dim && ok==1) // condizione finale while per b + cond ancora verificata
        {
            if(a[y]>=b[i]) //cosi' la cond non e' verificata
                ok=0;
            i++; //faccio scorrere l'array b
        }
        if(ok==1) //la cond e' verificata perche' nel while prec non ho mai avuto ok=0
            trovato=y; //elemento trovato
        y++; //faccio scorrere l'array a
        
    }
    return trovato;
}