/* Esercizio 14
Scrivere un programma in C che legga da tastiera 10 interi e li inserisca nell’array
a. Dichiarare inoltre un secondo array b, sempre di 10 elementi.
Scrivere poi una procedura che per ogni indice 0 ≤ i < 10 calcola il massimo
tra gli elementi a[0], a[1],... fino ad a[i] compreso e lo inserise in b[i].
Scrivere inoltre una funzione che calcoli la media degli elementi di un array.
Stampare l’array b al termine del processo e la media dei suoi elementi con 2
cifre decimali. */

#include <stdio.h>

void maxa(int a[], int b[], int dim);
float media(int b[], int dim);
int main()
{
    int a[10];
    int b[10];
    int i;
    for(i=0; i<10; i++)
        scanf("%d", &a[i]);
    maxa(a, b, 10);
    for(i=0; i<10; i++)
        printf("%d\n", b[i]);
    printf("%.2f\n", media(b, 10));
    return 0;

}

void maxa(int a[], int b[], int dim)
{
    int i;
    int m=a[0]; //variabile del max
    //int el; //indice elemento corrente
    for(i=0; i<dim; i++)
    {
        
        if(m<a[i])
            m=a[i];
        b[i]=m;    
    }

    //metodo alternativo piu' lungo:
    //el=0;
        //while(el<=i)
        //{
        //  if(m<a[el])
            //m=a[el];
        //  el++;
        //}
}

float media(int b[], int dim)
{
    int i;
    int s=0; //somma elementi
    //int c=0; //conta numero di elementi
    float m; //media elementi 
    for(i=0; i<dim; i++)
    {
        s=s+b[i];
        //c++;
    }
    m=(float)s/(float)dim;
    return m;
}

