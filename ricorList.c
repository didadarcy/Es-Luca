#include <stdio.h>
#include <stdlib.h>

struct el_lista
{
    int dato;
    struct el_lista* next;
};
typedef struct el_lista node;
void printRec(node* List);
void tailInsRec(node** List, int new_dato);
void middleInsRec(node** List, int new_dato);
void delLastRec(node** List);
void delMiddleRec(node** List);
int main()
{
    node* List=NULL;
    int new_dato;
    int i;
    for(i=0; i<5; i++)
    {
        scanf("%d", &new_dato);
        tailInsRec(&List, new_dato);
    }
    delLastRec(&List);
    middleInsRec(&List, 8);
    delMiddleRec(&List);
    printRec(List);
    return 0;
}
void printRec(node* List)
{   
    if(List!=NULL)
    {
        printf("%d\n", List->dato);
        printRec(List->next);
    }
}

void tailInsRec(node** List, int new_dato)
{
    node* new_node;
    if(*List == NULL)
    {
        new_node = malloc(sizeof(node));
        new_node->dato = new_dato;
        new_node->next = *List; //= NULL
        *List = new_node;
    }
    else
        tailInsRec(&((*List)->next), new_dato);
}

void middleInsRec(node** List, int new_dato)
{
    node* new_node;
    if(*List==NULL || (*List)->dato>=new_dato)
    {
        new_node=malloc(sizeof(node));
        new_node->dato=new_dato;
        new_node->next=*List;
        *List=new_node;
    }
    else
        middleInsRec(&((*List)->next), new_dato);
}

void delLastRec(node** List)
{
    node* aux;
    if(*List!=NULL)
    {
        if((*List)->next==NULL)
        {
            aux=*List;
            *List=(*List)->next; //=NULL
            free(aux);
        }
        else
            delLastRec(&((*List)->next));
    }
}

void delMiddleRec(node** List)
{
    node* aux;
    if(*List!=NULL && (*List)->next!=NULL)
    {
        if((*List)->next->dato<(*List)->dato)
        {
            aux=(*List)->next;
            (*List)->next=(*List)->next->next; //=NULL
            free(aux);
        }
        else
            delMiddleRec(&((*List)->next));
    }
}