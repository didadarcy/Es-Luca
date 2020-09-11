/*creare una struct Coppia che contiene due numeri interi. Dichiarare un array di tipo Coppia 
di dim 3. Leggere per 3 volte due numeri interi e inseririrli nell'array (ad es leggo 3 e 13 e
li metto nella prima coppia ecc).
Scrivere una funzione che prende in input un array di coppie e la sua dim e restituisce una
Coppia tale che:
-il primo el e' la somma di tutti i primi el
-il secondo el e' il prodotto di tutti i secondi el
Stampare il risultato della funzione*/

#include <stdio.h> 
typedef struct
{
    int num1;
    int num2;
} Coppia;
Coppia funzione(Coppia a[], int dim);
int main()
{
    Coppia a[3];
    int i;
    Coppia funz;
    for(i=0; i<3; i++)
        scanf("%d %d", &a[i].num1, &a[i].num2);
    funz=funzione(a, 3);
    printf("%d %d\n", funz.num1, funz.num2);
    return 0;
}
Coppia funzione(Coppia a[], int dim)
{
    Coppia somma;
    int i;
    somma.num1=0;
    somma.num2=1;
    for(i=0; i<dim; i++)
    {
        somma.num1= somma.num1+a[i].num1;
        somma.num2= somma.num2*a[i].num2;
    }
    return somma;
}