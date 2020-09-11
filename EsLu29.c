/*Esercizio 1
Scrivere un programma in C che legga da tastiera due numeri 𝑎, 𝑏. Dichiarare
inoltre due variabili intere sum, prod.
Scrivere una procedura che modifica il valore di sum e prod nel seguente modo:
• sum deve contenere la somma di 𝑎 e 𝑏,
• prod deve contenere il prodotto di 𝑎 e 𝑏.
Stampare infine il valore di sum e prod.*/

#include <stdio.h>
void sumprod(int* sum, int* prod, int a, int b); 
//passo a e b senza puntatori perche' non devo modificarli
int main()
{
    int a, b;
    int sum;
    int prod;
    scanf("%d %d", &a, &b);
    sumprod(&sum, &prod, a, b);
    printf("%d\n%d\n", sum, prod);
    return 0;
}

void sumprod(int* sum, int* prod, int a, int b)
{
    *sum= a+b;
    *prod= a*b;
}