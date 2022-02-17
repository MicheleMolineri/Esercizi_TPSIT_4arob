#include <stdio.h>
#include <stdlib.h>
#define DIM 3
//seconda versione bubble sort con chiamata completa
void bubbleSort(int vett[], int n) {     // BUBBLE SORT MODIFICATO
    int k,i,a;

    for(k<n-1; k>0; k--) {
        for(i=0; i<k; i++) {
            if( *(vett+(i+1)) < *(vett+i) ) {       //  *(vett+k)  => puntatore al primo valore + k
                a=*(vett+(i+1));
                *(vett+(i+1))=*(vett+i);
                *(vett+i)=a;
            }
        }
    }
}

void caricaVettoreInteri(int vett[], int n) {
    int k;
    for(k = 0; k < n; k++) {
        printf("Inserisci l'elemento: ");
        scanf("%d", vett+k);

    }
}

void stampaVettore(int vett[], int n) {
    int k;

    for(k = 0; k < n; k++) {
        printf("%d ",*(vett+k));     //se scrivo ,vett+k stampa l'indirizzo
    }
    printf("\n");
}

int main() {
    int vet[DIM];
    int n=DIM;
    caricaVettoreInteri(vet,n);
    bubbleSort(vet,n);
    stampaVettore(vet,n);

}
