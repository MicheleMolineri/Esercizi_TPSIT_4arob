#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Dichiarazione var puntatori a int e char
    int *num;
    char *p;

    // Assegno valori alle variabili
    num = 5;
    p = 'a';


    // stampa indirizzo e valore
    printf(" num vale %d e si trova nella cella %d \n",num,&num);
    printf(" il carattere vale %c e si trova nella cella %d",p,&p);

}
