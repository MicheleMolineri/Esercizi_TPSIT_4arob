#include <stdio.h>
#include <stdlib.h>
#define LUNGH 20
#define DIM 4

typedef struct{
    float info;
    float mate;
    float ita;
}Studente;


void inserisciStudente(Studente v[],int n) {
    int k,j=1;
    for(k=0; k<n; k++) {
        fflush(stdin);
        printf("inserisci il voto di italiano dello studente %d: ",j);
        scanf("%f",&v[k].ita);
        printf("inserisci il voto di matematica dello studente %d: ",j);
        scanf("%f",&v[k].mate);
        printf("inserisci il voto di informatica dello studente %d: ",j);
        scanf("%f",&v[k].info);
        j++;
        printf("\n");
    }
}

void mediaAlta(Studente v[],int n){
    int k;
    float sommaIta,sommaMate,sommaInfo;
     for(k=0;k<n;k++){
        sommaInfo=sommaInfo+v[k].info;
        sommaIta=sommaIta+v[k].ita;
        sommaMate=sommaMate+v[k].mate;
     }

     if(sommaInfo>sommaIta && sommaInfo>sommaMate){
        printf(" la materia con la media piu' alta e' informatica\n");
     }
     if(sommaMate>sommaIta && sommaInfo<sommaMate){
        printf(" la materia con la media piu' alta e' matematica\n");
     }
     if(sommaMate<sommaIta && sommaInfo<sommaIta){
        printf(" la materia con la media piu' alta e' italiano\n");
     }
}

int main()
{
    Studente v[DIM];
    int n=DIM;
    inserisciStudente(v,n);
    mediaAlta(v,n);
    return 0;
}
