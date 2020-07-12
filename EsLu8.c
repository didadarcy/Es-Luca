/* Esercizio 8
Scrivere un programma 
in C che legga dalla tastiera degli interi
finché il numero letto è diverso da 0. 
Il programma deve stampare la somma di 
tutti i numeri letti (escluso lo 0 anche 
se vabbè non cambia niente). */

#include <stdio.h>

int somma(int n);
int main ()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", somma(n));

    return 0;
}

int somma(int n)
{
    int s=n;
    while(n!=0)
    {
        scanf("%d", &n);
        s=n+s;     
    }
    return s;
}

//avrei potuto anche non passare nulla alla funzione e
//dichiarare n li e leggerlo con scanf una sola volta
//concettualmente il primo n non e' diverso dagli altri

