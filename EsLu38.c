/*definisci una struct che rappresenta dei punti del piano cartesiano (deve contenere due int)
Fai una funzione che prende tre punti e restituisce il loro baricentro*/

#include <stdio.h>
typedef struct
{
    int x;
    int y;
} Punto;
Punto baricentro(Punto p1, Punto p2, Punto p3);
int main()
{
    Punto p1, p2, p3;
    Punto b;
    scanf("%d %d %d %d %d %d", &p1.x, &p1.y, &p2.x, &p2.y, &p3.x, &p3.y);
    b=baricentro(p1, p2, p3);
    printf("%d\n%d\n", b.x, b.y);
    return 0;
}
Punto baricentro(Punto p1, Punto p2, Punto p3)
{
    Punto baricentro;
    baricentro.x=(p1.x+p2.x+p3.x)/3;
    baricentro.y=(p1.y+p2.y+p3.y)/3;
    return baricentro;
}

