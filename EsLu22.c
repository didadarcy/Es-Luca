/* Esercizio 12
Scrivere un programma in C che legga da tastiera 10 interi e li inserisca nell’array
a.
Scrivere poi una funzione che calcola il massimo dell’array a e restituisce la sua
posizione (se ho due valori uguali restituisco la posizione del primo).
Stampare il risultato della funzione (la posizione del massimo) e il valore del
massimo (ad esempio, se il massimo è 3 ed è in posizione 5, allora l’output deve
essere “5 3”). */

#include <stdio.h>

int max(int a[], int dim);
int main()
{
    int a[10];
    int i;
    int n;
    for(i=0; i<10; i++)
        scanf("%d", &a[i]);
    n=max(a, 10); 
    printf("%d %d\n", n, a[n]); // printf("%d %d", max(a, 10), a[max(a, 10)]) ma cosi' e' brutto
                            // perche' calcolo max(a, 10) due volte
    return 0;
    
}

int max(int a[], int dim)
{
    int i;
    int m=a[0]; //valore iniziale del max
    int p=0; //posizione iniziale del max
    for(i=0; i<dim; i++) //scorro l'array a
    {
        if(i!=dim-1) //perche' altrimenti a[i+1]=a[10] che non e' nell'array
        {
            if(m<a[i+1]) //cond per cambiare il max
            {
                m=a[i+1];
                p=i+1;
            }    
        }
    }
    // metodo migliore:
    // for(i=1; i<dim; i++) //parto da 1 cosi' considero l'el corrente
    // {
    //      if(m<a[i]) //cond per cambiare il max
    //      {
    //          m=a[i];
    //          p=i;
    //      }    
    // }
    return p;
}

//altro metodo ancora per il for (meh)
// for(i=0; i<dim-1; i++) //cosi' non devo mettere l'if(i!=dim-1)
// {
//     if(m<a[i+1]) //cond per cambiare il max
//     {
//         m=a[i+1];
//         p=i+1;
//     }
// }

