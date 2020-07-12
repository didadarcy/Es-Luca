/* Esercizio 3
Scrivere un programma in C che legga da tastiera un intero n. 
Il programma a questo punto deve chiamare
una procedura che prenda in input l'intero n. 
La procedura legge per n volte due altri interi a e b, 
e per ogni lettura stampa
"maggiore" se a > b
"minore" se a < b
"uguale" se a = b. */

#include <stdio.h>

void magmin(int n);

int main()
{
    int n;
    scanf("%d", &n);
    magmin(n);
    return 0;
}

void magmin(int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        int a,b;
        scanf("%d", &a);
        scanf("%d", &b);
        if(a>b)
            printf("maggiore\n");
        else
        {
            if(a<b)
                printf("minore\n");
            else
                printf("uguale\n");
        }
    }
}

