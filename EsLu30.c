/*Esercizio 2
Scrivere un programma in C che legga da tastiera un numero n. Scrivere una
procedura che modifichi il valore di n nel seguente modo:
• se n è pari allora n = n/2,
• se n è dispari allora n = (n + 1)/2.
Stampare il nuovo valore di n.*/

#include <stdio.h>
void change_n(int* n); //passo il puntatore perche' devo modificare n
int main()
{
    int n;
    scanf("%d", &n);
    change_n(&n);
    printf("%d\n", n);
    return 0;
}
void change_n(int* n)
{
    if(*n%2==0)
        *n=*n/2;
    else
        *n=(*n+1)/2;
}