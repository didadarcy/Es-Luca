/*Esercizio 7
Scrivere un programma in C che legga dalla tastiera degli 
interi finché il numero letto è diverso da 0. 
Il programma deve contare quanti numeri (che non siano 0) 
vengono letti e stampare questo contatore.*/

#include <stdio.h>
int conta();
int main()
{
    printf("%d\n", conta());
    return 0;
}

int conta()
{
    int n;
    scanf("%d", &n); 
    //SE NON FACCIO STO SCANF ASSEGNA A N UN VALORE A CASO
    //e mi somma in s un n di troppo
    int s=0;
    while(n!=0)
    {
        scanf("%d", &n);
        s++;
    }
    return s;
}