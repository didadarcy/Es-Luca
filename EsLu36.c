//a[5], stampa primo e ultimo el pari di un array. stampa -1 se non ci sta. fai struct

#include <stdio.h>
typedef struct
{
    int primo;
    int ultimo;
} pari;

pari funzione(int a[], int dim);
int main()
{
    int i;
    int a[5];
    pari funz;
    for(i=0; i<5; i++)
        scanf("%d", &a[i]);
    funz=funzione(a, 5);
    printf("%d\n%d\n", funz.primo, funz.ultimo);
    return 0;
}
pari funzione(int a[], int dim)
{
    pari El;
    int i;
    El.primo=-1;
    El.ultimo=-1;
    for(i=0; i<dim; i++)
    {
        if(a[i]%2==0)
        {
            if(El.primo==-1)
            {
                El.primo=a[i];
                El.ultimo=a[i];
            }
            else
                El.ultimo=a[i];
        }
    }
    return El;
}