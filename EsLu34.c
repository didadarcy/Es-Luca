/* Dichiara tre variabili float: a, b, c. Inizializzale leggendo i valori da tastiera.
Dichiara inoltre tre puntatori a float (p1, p2, p3) e fai in modo che p1 punti ad a, p2 
a b, p3 a c. Scrivi una procedura che modifichi p1, p2, p3 nel seguente modo:
-p1 punta a b
-p2 punta ad a
-p3 punta ad a
Stampa i valori puntati da p1, p2, p3. */

#include <stdio.h>
void sushi(float** nigiri1, float** nigiri2, float** nigiri3); //devo modificare i puntatori quindi mi serve un puntatore a essi
int main()
{
    float a,b,c;
    float* p1;
    float* p2;
    float* p3;
    scanf("%f %f %f", &a, &b, &c);
    p1=&a; //p1 punta ad a. (Non posso scrivere *p1=a perche' prima di assegnargli un valore puntato, p1 deve prima puntare a un indirizzo)
    p2=&b;
    p3=&c;
    sushi(&p1, &p2, &p3);
    printf("%f\n%f\n%f\n", *p1,*p2,*p3);
    return 0;
}

void sushi(float** nigiri1, float** nigiri2, float** nigiri3)
{
    float* temp= *nigiri1;
    *nigiri1=*nigiri2;
    *nigiri2=temp;
    *nigiri3=temp;

}