/*Esercizio 11

Scrivere un programma in C che legga da tastiera due numeri 
a e b. Scrivere poi una funzione che prenda in input due 
interi e ne calcoli il Massimo Comun Divisore seguendo 
l'algoritmo di Euclide:

-se uno dei due numeri è 0, allora si ferma e restituisce 
l'altro
-se a > b allora sostituisce a con il resto di a modulo b 
e continua il processo
-se a < b allora sostituisce b con il resto di b modulo a 
e continua il processo.

Chiamare la funzione sui due numeri a e b e stamparne 
l'output.
*/

#include <stdio.h>

//void mcd(int a, int b);
int mcd(int a, int b);
int main()
{
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d\n", mcd(a,b));
    //mcd(a,b);
    return 0;
}

// void mcd(int a, int b)
// {
//     while(a!=0 && b!=0)
//     {        
//         if(a>b)
//             a=a%b;
//         else
//             b=b%a;
//     }
//     if(a==0)
//         printf("%d\n", b);
//     else
//         printf("%d\n", a);

// }

int mcd(int a, int b)
{
    int r;
    while(a!=0 && b!=0)
    {        
        if(a>b)
            a=a%b;
        else
            b=b%a;
    }
    if(a==0)
        r=b;
    else
        r=a;

    return r;

}