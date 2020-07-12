/* Esercizio 2
Scrivere un programma in C che legga da tastiera un intero n.
Il programma a questo punto deve chiamare
una procedura che prenda in input l'intero n. 
La procedura legge per n volte un altro intero, e per ogni
lettura stampa:
-"positivo" se l'intero letto è positivo
-"negativo" se è negativo
-"0" se è nullo. */

#include <stdio.h>

void segno(int n);

int main()
{
    int n;
    scanf("%d", &n);
    segno(n);
    return 0;
}

void segno(int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        int m;
        scanf("%d", &m);
        if(m>0)
            printf("positivo\n");
        else
        {
            if(m<0)
                printf("negativo\n");
            else
                printf("nullo\n");
        }

    }
    
}

