
#include <stdio.h>
#include <stdlib.h>
#define DIM 2
#define LUNGH 20

//definire tipo studente nome,cognome,matricola
//dati 10 studenti ordinarli ad ogni inserimento
//stampare studenti ordinati

typedef struct {
    char nome[LUNGH];
    char cognome[LUNGH];
    int matricola;
} Studente;

void inserisciStudente(Studente v[],int n) {
    int k;
    for(k=0; k<n; k++) {
        printf("inserisci il nome dello studente: ");
        scanf("%s",v[k].nome);
        fflush(stdin);
        printf("inserisci il cognome dello studente: ");
        scanf("%s",v[k].cognome);
        fflush(stdin);
        printf("inserisci il numero di matricola dello studente: ");
        scanf("%d",&v[k].matricola);
    }
}

void stampaStudente(Studente v[],int n) {
    int k;
    for(k=0; k<n; k++) {
        printf("\t cognome: %s \t nome: %s \t matricola: %d\n",v[k].cognome,v[k].nome,v[k].matricola);
    }
}

int main() {
    Studente v[DIM];
    int n=DIM;
    inserisciStudente(v,n);
    stampaStudente(v,n);
    return 0;

}
