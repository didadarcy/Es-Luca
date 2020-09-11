//date due liste ordinate stampa il valore assoluto degli elementi delle liste in ordine

#include <stdio.h>
#include <stdlib.h>

struct el_lista
{
    int dato;
    struct el_lista* next;
};
typedef struct el_lista node;
void InsOrdRec(node** List, int new_dato);
void printAbs(node* List);
int main()
{
    node* List1=NULL;
    node* List2=NULL;
    int new_dato1;
    int new_dato2;
    scanf("%d", &new_dato1);
    while(new_dato1!=0)
    {
        InsOrdRec(&List1, new_dato1);
        scanf("%d", &new_dato1);
    }
    scanf("%d", &new_dato2);
    while(new_dato2!=0)
    {
        InsOrdRec(&List2, new_dato2);
        scanf("%d", &new_dato2);
    }
    printAbs(List1);
    printAbs(List2);

}
void InsOrdRec(node** List, int new_dato)
{
    node* new;
    if(*List==NULL)
    {
        new=malloc(sizeof(node));
        new->dato= new_dato;
        new->next=NULL;
        *List=new;
    }
    else
    {
        if(new_dato>=(*List)->dato)
        {
            new=malloc(sizeof(node));
            new->dato= new_dato;
            new->next=(*List)->next;
            (*List)->next=new;
        }
        else
            InsOrdRec(&((*List)->next), new_dato);
    }
}
void printAbs(node* List)
{
    node* curr=List;
    while(curr!=NULL)
    {
        if(curr->dato>=0)
            printf("%d\n", curr->dato);
        else
            printf("%d\n", -(curr->dato));
        curr=curr->next;
    }
}






