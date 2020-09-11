/*esercizio 8
Scrivere un programma in C che implementi la seguente funzione:
• inserimento ordinato
• data una lista, stampare i suoi elementi in ordine inverso (hint: modifica
la solita printRec).
Nel main dichiarare la lista e leggere i suoi elementi usando la funzione di
inserimento. L’acquisizione viene interrotta quando il numero letto è uguale
a 0 (questo elemento non va incluso nella lista). Stampare la lista in ordine
inverso e verificare che sia effettivamente in ordine decrescente. Cancellare
la lista con una funzione apposita.*/

#include <stdio.h>
#include <stdlib.h>
struct el_list
{
    int dato;
    struct el_list* next;
};
typedef struct el_list node;
void insord(node** List, int new_dato);
void printWeird(node* List);
void delList(node** List);
int main()
{
    node* List=NULL;
    int new_dato;
    scanf("%d", &new_dato);
    while(new_dato!=0)
    {
        insord(&List, new_dato);
        scanf("%d", &new_dato);
    }
    printWeird(List);
    delList(&List);
    return 0;
}

void insord(node** List, int new_dato)
{
    node* new;
    if(*List==NULL || (*List)->dato>=new_dato)
    {
        new=malloc(sizeof(node));
        new->dato=new_dato;
        new->next=*List;
        *List=new;
    }
    else
        insord(&((*List)->next), new_dato);
}
void printWeird(node* List)
{
    if(List!=NULL)
    {
        printWeird(List->next);
        printf("%d\n", List->dato);
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