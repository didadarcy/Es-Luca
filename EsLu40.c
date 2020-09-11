/*dichiaro nel main una lista vuota, inserisco 5 numeri nella lista in ordine usando middleIns
poi faccio una funzione che prende una lista e azzera tutti i valori pari della lista.
Stampo la nuova lista e la cancello (del).*/
#include <stdio.h>
#include <stdlib.h>
struct el_di_lista
{
    int dato;
    struct el_di_lista* next;

};
typedef struct el_di_lista node;
void middleIns(node** List, int new_dato);
void azzera_pari(node* List);
void print(node* List);
void delList(node** List);
int main()
{
    node* List=NULL;
    int new_dato;
    int i;
    for(i=0; i<5; i++)
    {
        scanf("%d", &new_dato);
        middleIns(&List, new_dato);
    }
    azzera_pari(List);
    print(List);
    delList(&List);
    return 0;
}
void middleIns(node** List, int new_dato)
{
    node* new=malloc(sizeof(node));
    new->dato=new_dato;
    node* curr=*List;
    if(*List==NULL || curr->dato>=new_dato)
    {
        new->next=*List;
        *List=new;
    }
    else
    {
        while(curr->next!=NULL && curr->next->dato<new_dato)
            curr=curr->next;
        new->next=curr->next;
        curr->next=new;
    }
}

void azzera_pari(node* List)
{
    node* curr=List;
    while(curr!=NULL)
    {
        if(curr->dato%2==0)
            curr->dato=0;
        curr= curr->next;
    }
}

void print(node* List)
{
    node* curr=List;
    while(curr!=NULL)
    {
        printf("%d\n", curr->dato);
        curr= curr->next;
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