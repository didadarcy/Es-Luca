#include <stdio.h>
#include <stdlib.h>

struct el_di_lista{
    int dato;
    struct el_di_lista* next;
};
typedef struct el_di_lista Nodo;

void printList(Nodo* list);

int main(){
    Nodo* first = malloc(sizeof(Nodo));
    Nodo* second = malloc(sizeof(Nodo));
    Nodo* third = malloc(sizeof(Nodo));
    first->dato = 1;
    second->dato = 2;
    third->dato = 3;
    first->next = second;
    second->next = third;
    third->next = NULL;

    printList(first);
    free(first);
    free(second);
    free(third);
    return 0;
}

void printList(Nodo* list){
    Nodo* curr=list;
    while(curr!=NULL)
    {
        printf("%d\n", curr->dato);
        curr=curr->next;
    }
}
