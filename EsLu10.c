/*Esercizio 10
Scrivere un programma in C che legga dalla tastiera un 
intero n e chiami una procedura che prende in input
un intero, passando n.
La procedura prende n in input ed effettua le seguenti 
operazioni finché n è diverso da 1:
-stampa n
-se n è pari, allora assegna ad n il valore n/2
-se n è dispari, allora assegna ad n il valore 3n + 1.
Infine stampare 1.*/

#include <stdio.h>

void notone(int n);
int main()
{
    int n;
    scanf("%d", &n);
    notone(n);
    return 0;
}

void notone(int n)
{
    printf("%d\n", n);
    while(n!=1)
    {
        if(n%2==0)
            n=n/2;
        else
            n=3*n+1;
        printf("%d\n", n);

    }
}