/*
esercizio 3
Scrivere un programma in C che implementi la seguente funzione:
• inserimento in coda
• data una lista, cancellare ogni elemento seguito da un numero negativo.
Nel main dichiarare la lista e leggere i suoi elementi usando la funzione
di inserimento. L’acquisizione viene interrotta quando il numero letto è
uguale a 0 (questo elemento non va incluso nella lista). Chiamare la seconda
funzione e poi stampare il contenuto della lista. Cancellare la lista con una
funzione apposita.*/

#include <stdio.h>
#include <stdlib.h>
struct el_lista
{
    int dato;
    struct el_lista* next;
};
typedef struct el_lista node;
void tailIns(node** List, int new_dato);
void delnextNeg(node** List);
void print(node* List);
void delList(node** List);
int main()
{
    node* List=NULL;
    int new_dato;
    scanf("%d", &new_dato);
    while(new_dato!=0)
    {
        tailIns(&List, new_dato);
        scanf("%d", &new_dato);
    }
    delnextNeg(&List);
    print(List);
    delList(&List);
    return 0;
}
void tailIns(node** List, int new_dato)
{
    node* new;
    if(*List==NULL)
    {
        new=malloc(sizeof(node));
        new->dato=new_dato;
        new->next=*List;
        *List=new;
    }
    else
        tailIns(&((*List)->next), new_dato);
}
void delnextNeg(node** List)
{
    node* aux;
    if(*List!=NULL && (*List)->next!=NULL)
    {
        if((*List)->next->dato<0)
        {
           aux=*List;
           *List=(*List)->next;
           free(aux);
           delnextNeg(List);
        }
        else
            delnextNeg(&((*List)->next));
    }
}

void delList(node** List)
{
    node* aux;
    while(*List!=NULL)
    {
        aux=*List;
        *List=(*List)->next;
        free(aux);
    }
}
void print(node* List)
{
    node* curr=List;
    while(curr!=NULL)
    {
        printf("%d\n", curr->dato);
        curr=curr->next;
    }
}
