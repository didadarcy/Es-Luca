//ho un array a[5]; in b[5] elementi pari di a e in c[5] elementi dispari di a e 
//stampa i due array


#include <stdio.h>
int paridispari(int a[], int b[], int c[], int dim);
int main()
{
    int i;
    int a[5];
    int b[5];
    int c[5];
    int n;
    for(i=0; i<5; i++)
        scanf("%d", &a[i]);
    n=paridispari(a, b, c, 5);
    for(i=0; i<n; i++)
        printf("%d\n", b[i]);
    for(i=0; i<(5-n); i++) // (5-n) e' il numero di elementi dispari
        printf("%d\n", c[i]);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    return 0;
}

int paridispari(int a[], int b[], int c[], int dim)
{
    int i;
    int j=0;
    int k=0;
    for(i=0; i<dim; i++)
    {
        if(a[i]%2==0)
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            c[k]=a[i];
            k++;
        }    
        
    }
    return j; //numero elementi pari
}