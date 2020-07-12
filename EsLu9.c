/*Esercizio 9
Scrivere un programma in C che legga dalla tastiera 
degli interi finché il numero letto è diverso da 0. 
Il programma deve stampare la media con 2 cifre decimali 
di tutti i numeri letti (escluso lo 0).
Hint: bisogna contare quanti numeri vengono letti e 
tenere traccia della loro somma, quindi puoi sfruttare
le cose usate per i due esercizi precedenti.
Ricorda! Per fare la media devi stare attenta ai tipi: 
la media è float, mentre la somma e il contatore sono
interi, quindi bisogna fare un casting.*/

#include <stdio.h>

float media();
int main()
{
    printf("%0.2f\n", media());
    return 0;
}

float media()
{
    int n;
    int c;
    int s;
    float m;
    scanf("%d", &n);
    c=1;
    s=n;
    while(n!=0)
    {
        scanf("%d", &n);
        if(n!=0)
        {   
            s=s+n;
            c++;
        }
    }
    m=(float)s/(float)c;
    return m;

}