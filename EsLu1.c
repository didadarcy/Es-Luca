/*Esercizio 1
Scrivere un programma in C che legga da tastiera un intero n. 
Il programma a questo punto deve chiamare
una funzione che prenda in input l'intero n. 
La procedura legge per n volte un altro intero 
(ALTRI N INTERI QUINDI), 
e per ogni lettura stampa
"1" se l'intero letto è dispari
"0" se è pari.*/

#include <stdio.h>

int pardis(int n);

int main()
{
    int n;
    scanf("%d", &n); //lettura intero n
    pardis(n);

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
            printf("0\n" );
        else
            printf("1\n" );

    }
    
}
