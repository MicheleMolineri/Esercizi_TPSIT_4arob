#include <stdio.h>
#include <stdlib.h>
#define DIM 100




void inverti(int n, int v1[], int v2[]) {
    int t;
    int k = n - 1;

    for(t = 0; t < n; t++) {
        v2[k] = v1[t];
        k = k - 1;
    }
}

void caricaVettore(int vett[], int n){
    int k;
    for(k = 0; k < n; k++){
        printf("Inserisci l'elemento: ");
        scanf("%d", &vett[k]);
    }
}

void stampaVettore(int vett[], int n) {
    int k;

    for(k = 0; k < n; k++) {
        printf("%d ",vett[k]);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Inserisci numero di elementi: ");
    scanf("%d", &n);

    int *v1=(int *)malloc(n *sizeof(int));
    int *v2=(int *)malloc(n *sizeof(int));
   caricaVettore(v1,n);
   inverti(n,v1,v2);
   stampaVettore(v2,n);
}
