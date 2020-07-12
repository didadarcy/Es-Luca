/*Esercizio 0
Scrivere un programma in C che legga da tastiera un intero n. 
Il programma a questo punto deve chiamare
una funzione che prenda in input l'intero n. 
La procedura legge un altro intero m e stampa
"1" se l'intero letto è dispari
"0" se è pari.*/

#include <stdio.h>

int pardis(int n);

int main()
{
    int n;
    scanf("%d", &n); //lettura intero n
    printf("%d\n", pardis(n));

    return 0;
}

int pardis(int n)
{
    int i;
    for (i=0;i<n;i++) 
    {
        int m; //altro intero
        scanf("%d", &m); // lettura intero m
        if(m%2==0) //se m pari
            return 0;
        else
            return 1;

    }
}
