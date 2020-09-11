/* esercizio 1
Scrivere un programma in C che implementi le seguenti funzioni:
• inserimento in testa ad una lista,
• una funzione che data una lista cancelli tutti gli elementi pari della
lista.
Nel main dichiarare la lista e leggere i suoi elementi usando la funzione di
inserimento. L’acquisizione viene interrotta quando il numero letto è uguale
a 0 (questo elemento non va incluso nella lista). Applicare la funzione che
cancella gli elementi pari. Stampare poi la lista usando una funzione di
stampa. Infine cancellare la lista con una funzione apposita.*/

#include <stdio.h>
#include <stdlib.h>

struct el_lista
{
    int dato;
    struct el_lista* next;
};
typedef struct el_lista node;
void head_ins(node** List, int new_dato);
void del_pari(node** List);
void print(node* List);
void del_list(node** List);
int main()
{
    node* List=NULL;
    int new_dato;
    scanf("%d", &new_dato);
    while(new_dato!=0)
    {
        head_ins(&List, new_dato);
        scanf("%d", &new_dato);
    }
    del_pari(&List);
    print(List);
    del_list(&List);
    return 0;

}
void head_ins(node** List, int new_dato)
{
    node* new=malloc(sizeof(node));
    new->dato=new_dato;
    new->next=*List;
    *List=new;
}
void del_pari(node** List)
{
    node* curr=*List;
    node* aux;
    while(curr!=NULL)
    {
        if(curr==*List && curr->dato%2==0)
        {
           aux=curr;
           curr=curr->next;
           *List=(*List)->next; 
           free(aux);
        }
        else
        {
            if(curr->next!=NULL && curr->next->dato%2==0)
            {
                aux=curr->next;
                curr->next=curr->next->next;
                free(aux);
            }
            else
                curr=curr->next;
        }
    }
}
void print(node* List)
{
    node* curr=List;
    while(curr!=NULL)
    {
        printf("%d\n", curr->dato);
        curr=curr->next;
    }
}
void del_list(node** List)
{
    node* aux;
    while(*List!=NULL)
    {
        aux=*List; //avevo scordato questo
        *List=(*List)->next;
        free(aux);
    }
}