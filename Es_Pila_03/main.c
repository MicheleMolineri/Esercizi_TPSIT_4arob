#include <stdio.h>
#include <stdlib.h>
#define LUNGH 30
#define MAX_PAZIENTI 20

int nPazienti=0;

typedef struct
{

    char nome[LUNGH] ;
    char cognome[LUNGH] ;
    int matricola;
    int pressione[2]; // minima e massima
    int temperature[3]; // temperature della mattina e pomeriggio e sera
    float parcella; // in euro quello che deve al dottore

} Paziente;

//3. imposta una procedura (prototipo) con il corretto passaggio dei parametri che permetta ad
//   un utente di inserire tutti dati di un paziente che è stato passato alla procedura;
void inserisciDatiPaziente(Paziente *p){

    printf("inserisci il nome del Paziente : ");
    scanf("%s",p->nome);
    printf("inserisci il cognome del Paziente : ");
    scanf("%s",p->cognome);
    printf("inserisci la matricola : ");
    scanf("%d",&p->matricola);

    printf("inserisci la pressione minima :");
    scanf("%d",&p->pressione[0]);
    printf("inserisci la pressione max :");
    scanf("%d",&p->pressione[1]);


    printf("inserisci la temperatura mattino :");
    scanf("%d",&p->temperature[0]);
    printf("inserisci la temperatura pomeriggio :");
    scanf("%d",&p->temperature[1]);
    printf("inserisci la temperatura sera :");
    scanf("%d",&p->temperature[2]);

    printf("inserisci la parcella :");
    scanf("%f",&p->parcella);

    nPazienti++;

}

//4. imposta una procedura (prototipo) che stampa la pressione e la temperatura di unpaziente;

void stampaPressione(Paziente p){
    printf("pressione minima : %d\n",p.pressione[0]);
    printf("pressione max : %d",p.pressione[1]);
}

//5. imposta una procedura (prototipo) che dato l' indirizzo dell' array clinica ed il numero dipazienti
//   che vi sono sulla lista, calcola il saldo totale della clinica;

void calcolaSaldoTotale(Paziente vet[]){
    float saldoTot;
    for(int k=0;k<nPazienti;k++){
        saldoTot+=vet[k].parcella;
    }
    printf("saldo totale : %f\n",saldoTot);
}



int main()
{
    Paziente rossi;//1. definisci una variabile rossi di tipo paziente;
    Paziente vet[MAX_PAZIENTI];//2. definisci un array di 20 pazienti di nome clinica e di tipo paziente;

    vet[0]=rossi;

    inserisciDatiPaziente(&rossi);
    stampaPressione(rossi);
    calcolaSaldoTotale(vet);

}
