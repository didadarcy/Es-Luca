/* Esercizio 15
Scrivere un programma in C che legga da tastiera 12 interi e inserisca i primi
6 nell’array a e gli altri nell’array b. Dichiarare inoltre un terzo array c di 3
elementi.
Scrivere poi una procedura che calcoli il prodotti tra gli elementi pari dell’array
a e gli elementi dispari dell’array b e li inserisca in ordine nell’array c (ovvero,
c[0] = a[0] ∗ b[1], c[1] = a[2] ∗ b[3], c[2] = a[4] ∗ b[5], ecc se gli array fossero più
lunghi).
Scrivere un’altra funzione che calcoli il minimo di un array.
Stampare il minimo dell’array c. */

#include <stdio.h>

void prodotto(int a[], int b[], int c[], int dim_ab, int dim_c);
int min(int c[], int dim_c);
int main()
{
    int i;
    int a[6];
    int b[6];
    int c[3];
    for(i=0; i<6; i++)
        scanf("%d", &a[i]);
    for(i=0; i<6; i++)
        scanf("%d", &b[i]);
    prodotto(a, b, c, 6, 3);
    //for(i=0; i<3; i++)
    //    printf("%d\n", c[i]);
    printf("%d\n", min(c, 3));
    return 0;
}

void prodotto(int a[], int b[], int c[], int dim_ab, int dim_c)
{
    int i; // indice c[]
    int j=0; // indice a[] e b[]
    for(i=0; i<dim_c; i++)
    {
        c[i]=a[j]*b[j+1];
        j=j+2;
    }
    //altro metodo per non scrivere j:
    //int i;
    // for(i=0; i<dim_c; i++)
    // {
    //     c[i]=a[i*2]*b[i*2+1];
    // }
    
}

int min(int c[], int dim_c)
{
    int min=c[0]; //variabile minimo
    int i;
    for(i=0; i<dim_c; i++)
    {
        if(min>c[i])
            min=c[i];
    }
    return min;
}
