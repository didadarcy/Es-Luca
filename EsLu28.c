// array di 5 elementi. una funzione che trova il secondo el piu' grande dell'array.
// stampalo

#include <stdio.h>
int sec_max(int a[], int dim);
int main()
{
    int i;
    int a[5];
    for(i=0; i<5; i++)
        scanf("%d", &a[i]);
    printf("%d\n", sec_max(a, 5));
    return 0;
}

int sec_max(int a[], int dim)
{
    int i;
    int m=a[0]; //massimo
    int sm=a[0]; //secondo massimo
    for(i=0; i<dim; i++)
    {
        if(m<=a[i])
        {
            sm=m;
            m=a[i];    
        }
        else
        {
            if(m>a[i] && sm<=a[i])
            {
                sm=a[i];
            }
        }
    }
    return sm;
    
}