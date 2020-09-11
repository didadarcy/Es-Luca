#include <stdio.h>
#include <stdlib.h>

struct el_di_lista {
    int dato;
    struct el_di_lista* next;
};
typedef struct el_di_lista Nodo;
// typedef Nodo* Lista;

void printlist(Nodo* lista);

int main(){
    Nodo* lista = malloc(sizeof(Nodo));
    lista->dato = 9;
    lista->next = NULL;

    Nodo* secondo = malloc(sizeof(Nodo));
    secondo->dato = 10;
    lista->next = secondo;
    secondo->next = NULL;

    Nodo* terzo = malloc((sizeof(Nodo)));
    terzo->dato=7;
    secondo->next= terzo;
    terzo->next= NULL;

    printlist(lista);
    return 0;
}

void printlist(Nodo* lista)
{
    Nodo* i=lista;
    while(i!=NULL)
    {
        printf("%d\n", i->dato);
        i=i->next;
    }
}