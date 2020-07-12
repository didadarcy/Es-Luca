/*Esercizio 5
Scrivere un programma in C che legga da tastiera un intero n. 
Il programma a questo punto deve chiamare
una funzione che prenda in input l'intero n. 
La funzione legge per n volte un altro intero e restituisce 
la somma di tutti gli interi letti. 
La funzione chiamante (cioè il main) stampa il risultato 
della funzione.*/

#include <stdio.h>

int somma(int n);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", somma(n));
    return 0;
}

int somma(int n)
{
    int i;
    int s=0;
    for(i=0;i<n;i++)
    {
        int m;
        scanf("%d", &m);
        s=s+m;
    }
    return s;
}