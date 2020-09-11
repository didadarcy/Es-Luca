/* esercizio 2
Scrivere un programma in C che implementi le seguenti funzioni:
• inserimento in ordine decrescente in una lista
• una funzione che prende una lista e restituisce un intero che rappre-
senta la lunghezza della lista
• una funzione che data una lista e un array (con la sua dimensione)
controlli se nell’array c’è un elemento minore di tutti gli elementi della
lista. Se esiste restituire l’indice di quell’elemento, altrimenti restituire
-1.
Nel main dichiarare la lista e leggere i suoi elementi usando la funzione di
inserimento. L’acquisizione viene interrotta quando il numero letto è uguale
a 0 (questo elemento non va incluso nella lista). Leggere poi l’array di 5
elementi. Stampare il numero di elementi della lista e il risultato della terza
funzione. Cancellare la lista con una funzione apposita. */
#include <stdio.h>
#include <stdlib.h>
struct el_lista
{
    int dato;
    struct el_lista* next;
};
typedef struct el_lista node;
void InsOrdDec(node** List, int new_dato);
void listLenght(node* List);
void arrList(node* List, int a[], int dim);
void del_list(node** List);
//void print(node* List);
int main()
{
    node* List=NULL;
    int new_dato;
    int a[5];
    int i;
    scanf("%d", &new_dato);
    while(new_dato!=0)
    {
        InsOrdDec(&List, new_dato);
        scanf("%d", &new_dato);
    }
    for(i=0; i<5; i++)
        scanf("%d", &a[i]);
    //print(List);
    listLenght(List);
    arrList(List, a, 5);
    del_list(&List);
    return 0;
}
void InsOrdDec(node** List, int new_dato)
{
    node* new;
    if(*List==NULL || new_dato>=(*List)->dato)
    {
        new=malloc(sizeof(node));
        new->dato=new_dato;
        new->next=*List;
        *List=new;
    }
    else
        InsOrdDec(&((*List)->next), new_dato);
}
void listLenght(node* List)
{
    int lenght=0;
    node* curr=List;
    while(curr!=NULL)
    {
        lenght++;
        curr=curr->next;
    }
    printf("%d\n", lenght);
}
void arrList(node* List, int a[], int dim)
{
    node* curr=List;
    int i=0;
    int trovato=-1; //lo avevo dimenticato
    int ok; //el array minore di tutti gli el della lista
    while(trovato==-1 && i<dim)
    {
        ok=a[i]; //lo avevo dimenticato
        while(curr!=NULL && ok!=-1)
        {
            if(a[i]>=curr->dato)
                ok=-1;
            //else
            //    ok=a[i];
            curr=curr->next;
        }
        trovato=ok;
        i++;
        curr=List;
    }
    printf("%d\n", trovato);
}

void del_list(node** List)
{
    node* aux;
    while(*List!=NULL)
    {
       aux=*List;
       *List=(*List)->next;
       free(aux);
    }
}

/*void print(node* List)
{
    node* curr=List;
    while(curr!=NULL)
    {
        printf("%d\n", curr->dato);
        curr=curr->next;
    }
}*/