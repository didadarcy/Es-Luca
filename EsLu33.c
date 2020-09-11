/* Esercizio 5
Scrivere un programma in C che legga da tastiera due interi a e b. Dichiarare
inoltre due puntatori p 1 e p 2 e fare in modo che p 1 punti ad a, p 2 punti a b.
Scrivere una procedura che modifichi il valore dei puntatori (non degli oggetti
puntati) e scambi tra di loro i puntatori (ovvero, alla fine dell’esecuzione della
procedura, p 1 deve puntare a b e p 2 deve puntare ad a).
Stampare su una riga l’indirizzo di a e di b e su un’altra riga il contenuto di p 1
e p 2 (devono venire fuori gli stessi indirizzi, ma in ordine inverso).
Hint: per modificare una variabile di tipo int in una procedura abbiamo bisogno
di un puntatore a intero, per modificare una variabile di tipo float abbiamo
bisogno di un puntatore a float, per modificare una variabile di tipo puntatore
a intero abbiamo bisogno di...? */

#include <stdio.h>
void switch_punt(int** pp1, int** pp2);
int main()
{
    int a,b;
    int* p1;
    int* p2;
    scanf("%d %d", &a, &b);
    p1=&a;
    p2=&b;
    switch_punt(&p1, &p2); 
    printf("%d\n%d\n", &a, &b);
    printf("%d\n%d\n", p1, p2);
}

void switch_punt(int** pp1, int** pp2)
{
    int* temp= *pp1;
    *pp1=*pp2;
    *pp2=temp;
}