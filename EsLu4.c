/* Esercizio 4
Scrivere un programma in C che legga da tastiera un intero n.
Il programma a questo punto deve chiamare
una funzione che prenda in input l'intero n. 
La funzione legge per n volte un altro intero e restituisce
quante volte l'intero letto è divisibile per 4 (NUMERO INTERI
LETTI DIVISIBILI PER 4). 
La funzione chiamante (cioè il main) stampa il risultato 
della funzione. */

#include <stdio.h>

int div(int n);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", div(n));
    return 0;
}

int div(int n)
{
    int i;
    int s=0;
    for(i=0;i<n;i++)
    {
        int m;
        scanf("%d", &m);
/*      while(m%4==0)
            s++;
            m=m/4; 
*/
        if(m%4==0)
            s++;    
    }
    return s;

} 