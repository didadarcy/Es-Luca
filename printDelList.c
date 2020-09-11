#include <stdio.h>
#include <stdlib.h>

struct el_list
{
    int dato;
    struct el_list* next;
};

typedef struct el_list node;
void printList(node* Lista);
void delList(node** Lista);
int main()
{
    node* first=malloc(sizeof(node));
    node* second=malloc(sizeof(node));
    node* third=malloc(sizeof(node));

    first->next=second;
    second->next=third;
    third->next=NULL;

    scanf("%d %d %d", &first->dato, &second->dato, &third->dato);
    printList(first);
    delList(&first);
    return 0;

}

void printList(node* Lista)
{
    node* curr=Lista;
    while(curr!=NULL)
    {
        printf("%d\n", curr->dato);
        curr=curr->next;
    }
}

void delList(node** Lista) //metto due * perche' devo modificare il primo el della lista
{
    node* aux;
    while(*Lista!=NULL) //????????????????
    {
        aux=*Lista;
        *Lista=(*Lista)->next;
        free(aux);
    }
}