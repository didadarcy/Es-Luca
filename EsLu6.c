/*Esercizio 6
Scrivere un programma in C che legga da tastiera un intero n. 
Il programma a questo punto deve chiamare
una procedura che prenda in input l'intero n. 
La procedura legge per n volte un altro intero e, per ogni
intero letto, stampa il suo valore assoluto.
Bonus: calcolare il valore assoluto scrivendo un'altra 
funzione abs che prende in input un intero e
restituisce il suo valore assoluto.*/

#include <stdio.h>

void modulo(int n);
int abs(int n);

int main()
{
    int n;
    scanf("%d", &n);
    modulo(n);
    return 0;
}

void modulo(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        int m;
        scanf("%d", &m);
        printf("%d\n", abs(m));
    }
    
}

int abs(int n)
{
    if (n<0)
        n=-n;
    return n;
}
