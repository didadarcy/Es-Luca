/* Esercizio 4.1
Scrivere un programma in C che legga da tastiera un intero n.
Il programma a questo punto deve chiamare
una funzione che prenda in input l'intero n. 
La procedura legge per n volte un altro intero e restituisce
quante volte ogni intero letto è divisibile per 4. 
La funzione chiamante (cioè il main) stampa il risultato 
della funzione. */

#include <stdio.h>

void div(int n);

int main()
{
    int n;
    scanf("%d", &n);
    div(n);
    return 0;
}

void div(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        int m;
        int s=0;
        scanf("%d", &m);
        while(m%4==0 && m>3) //bastava anche con m>0
        {   s++;
            m=m/4;
        }
        printf("%d\n", s);  
    }

} //funzione che restituisce num volte m divisibile per 4