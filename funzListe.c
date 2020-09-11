#include <stdio.h>
#include <stdlib.h>

struct el_list
{
    int dato;
    struct el_list* next;
};
typedef struct el_list node;

void print(node* Lista);
void del(node** Lista);
void headIns(node** Lista, int new_dato);
void tailIns(node** Lista, int new_dato);
void middleIns(node** Lista, int new_dato);
int main()
{
    node* first=malloc(sizeof(node));
    node* second=malloc(sizeof(node));
    node* third=malloc(sizeof(node));
    scanf("%d %d %d", &first->dato, &second->dato, &third->dato);
    first->next=second;
    second->next=third;
    third->next=NULL;
    headIns(&first, 3);
    tailIns(&first, 9);
    middleIns(&first, 5);
    print(first);
    del(&first);
    return 0;
}

void print(node* Lista)
{
    node* curr=Lista;
    while(curr!=NULL)
    {
        printf("%d\n", curr->dato);
        curr=curr->next;
    }
}

void del(node** Lista)
{
    node* aux;
    node* curr=*Lista; //??
    while(curr!=NULL)
    {
        aux=curr;
        curr=curr->next;
        free(aux);
    }
    *Lista=NULL;
}

void headIns(node** Lista, int new_dato)
{
    node* new=malloc(sizeof(node));
    new->dato=new_dato;
    new->next=*Lista;
    *Lista=new;
}

void tailIns(node** Lista, int new_dato)
{
    node* new; 
    node* curr=*Lista;
    if(*Lista==NULL)
    {
        headIns(Lista, new_dato);
    }
    else 
    {
        new = malloc(sizeof(node));
        new->dato=new_dato;
        new->next=NULL;
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        curr->next=new;

    }
}

void middleIns(node** Lista, int new_dato) //suppogo la lista sia ordinata
{
    node* new;
    node* curr=*Lista;
    if(*Lista==NULL || curr->dato>=new_dato ) //?
    {
        headIns(Lista, new_dato);
    }
    else
    {
        new=malloc(sizeof(node));
        new->dato=new_dato;
        while(curr->next!=NULL && curr->next->dato<new_dato)
        {
            curr=curr->next;
        }
        new->next=curr->next;
        curr->next=new;
    }

}