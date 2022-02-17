#include <stdio.h>
#include <stdlib.h>
#define LUNGH 100
#include <stdbool.h>

bool controllo(char v[]) {
    int k=0;
    bool ok=false;
    char trovare= 'A';
   char trovare2= 'a';
    while(ok==false && k<10 && v[k]!='\n') {
            if(*(v+k)==trovare || *(v+k)==trovare2) {
            ok=true;
        } else {
            k++;
        }
    }
    return ok;

}

int main() {
    char *stringa=(char *)malloc(LUNGH *sizeof(char));

    printf("inserisci stringa: "),
    scanf("%s",stringa);

    bool verifica;
    verifica=controllo(stringa);
    if(verifica==true)
        printf("e' presente una a nei primi 10 caratteri");
    else
     printf(" non e' presente una a nei primi 10 caratteri");

    return 0;
}
