/*esercizio 7
Scrivere un programma in C che implementi le seguenti funzioni:
• inserimento ordinato in una lista, ma se l’elemento è già nella lista non
va inserito,
Dichiarare inoltre una lista vuota. Stampare il contenuto
della lista e cancellarla usando due apposite funzioni.*/

#include <stdio.h>
#include <stdlib.h>
struct el_lista
{
    int dato;
    struct el_lista* next;
};
typedef struct el_lista* node;
int main()
{

}
void insord(node** List, int new_dato);
{
    node* new;
    if(*List==NULL || (*List)->dato>new_dato)
    {
        new=malloc(sizeof(node));
        new->dato=new_dato;
        new->next=*List;
        *List=new;
    }
    else
    {
        if((*List)->dato!=new_dato)
            insord(&((*List)->next), new_dato);
    }
}