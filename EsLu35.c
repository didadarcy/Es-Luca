//leggi un array di 5 float e fai una funzione che restituisce max e posizione del max usando
// una struct adeguata

#include <stdio.h>

struct max
{
    float max;
    int pos_max;
};

struct max funzione(float a[], int dim);
int main()
{
    int i;
    float a[5];
    struct max funz;
    for(i=0; i<5; i++)
        scanf("%f", &a[i]);
    funz=funzione(a, 5);
    printf("%f\n", funz.max);
    printf("%d\n", funz.pos_max);
    return 0;
}
struct max funzione(float a[], int dim)
{
    int i;
    struct max Max;
    Max.max = a[0];
    Max.pos_max = 0;
    for(i=0; i<dim; i++)
    {
        if(Max.max<a[i])
        {
            Max.max=a[i];
            Max.pos_max=i;
        }
    }
    return Max;

}
