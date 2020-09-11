/* esercizio 4
Scrivere un programma in C che implementi la seguente funzione:
• dato un array di interi e la sua dimensione, sostituire ogni numero
dell’array con la somma dei numeri che lo precedono.
Nel main dichiarare un array di 5 interi, leggere i valori da tastiera e
passare l’array alla funzione. Infine stampare il risultato.*/

#include <stdio.h>
void sumarr(int a[], int dim);
int main()
{
    int a[5];
    int i;
    for(i=0; i<5; i++)
        scanf("%d", &a[i]);
    sumarr(a, 5);
    for(i=0; i<5; i++)
        printf("%d\n", a[i]);
    return 0;
}
void sumarr(int a[], int dim)
{
    int s=0;
    int new; //mi salvo il valore di s
    int i;
    for(i=0; i<dim; i++)
    {
        new=s;
        s=new+a[i];
        a[i]=new;
    }
    
}
void sumarrpt2(int a[], int dim) //se nella somma ci deve stare anche el corrente
{
    int i;
    for(i=1; i<dim; i++)
        a[i]=a[i]+a[i-1];
}