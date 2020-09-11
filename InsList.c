#include <stdio.h>
#include <stdlib.h>

struct el_list
{
    int dato;
    struct el_list* next;
};

typedef struct el_list node;
void head_ins(node** List, int new_dato);

int main()
{
    node* List;
}

void head_ins(node** List, int new_dato)
{
    node* new_node=malloc(sizeof(node));
    new_node->dato=new_dato;
    new_node->next=*List;
    *List=new_node;
}