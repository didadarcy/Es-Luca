/* struct che contiene float e int, la leggo nel main. faccio una proc che modifica una struct 
di quel tipo dimezzando il valore del float e triplicando quello dell'int. stampo la struct*/

#include <stdio.h>
typedef struct
{
    float num1;
    int num2;
} Cersei;
void Jaime(Cersei* Lannister);
int main()
{
    Cersei Lannister;
    scanf("%f %d", &Lannister.num1, &Lannister.num2);
    Jaime(&Lannister);
    printf("%f\n%d\n", Lannister.num1, Lannister.num2);
    return 0;
}
void Jaime(Cersei* Lannister)
{
    (*Lannister).num1=((*Lannister).num1)/2;
    (*Lannister).num2=((*Lannister).num2)*3;
}