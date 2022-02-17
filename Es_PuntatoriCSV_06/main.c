#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define LUNG 30


typedef struct {

    int num;
    char titolo[LUNG];
    char tipologia[LUNG];
    int anno;
    char disp[LUNG];

} film;

void leggi(film v[], int n, char nomefilm[]) {
    FILE *fp;
    int conta=0;
    char line[100];
    fp = fopen(nomefilm, "r");
    for(int i=0; i<n; i++) {
        fgets(line, 100, fp);
        char* token = strtok(line, ",");
        while(token != NULL) {
            switch(conta) {
            case 0:
                (v+i)->num = atoi(token);
                break;
            case 1:
                strcpy((v+i)->titolo, token);
                break;
            case 2:
                strcpy((v+i)->tipologia, token);
                break;
            case 3:
                (v+i)->anno = atoi(token);
                break;
            case 4:
                strcpy((v+i)->disp, token);
                break;
            }
            conta++;
            token = strtok(NULL, ",");
        }
        conta=0;
    }
    fclose(fp);
}

void stampa(film v[],int n) {
    printf("\tNumero \tTitolo  \tTipologia  \tAnno  \tDisponibilita' \n");
    for(int k=0; k<n; k++) {
        printf("%d %s  %s  %d  %s \n",(v+k)->num,(v+k)->titolo,(v+k)->tipologia,(v+k)->anno,(v+k)->disp);
    }
}

int contaRige(char nomeFile[]) {
int n;
    FILE *fp;
    char stringa[100];
    fp=fopen(nomeFile,"r");

    if(fp==NULL) {
        printf("il file non esiste");

    } else {
        while( fgets(stringa,100,fp)!=0) {
            n++;
        }

        fclose(fp);
    }
    return n;
}

int main() {
    int n;
    film *catalogo;
    n=contaRige("listafilm.csv.txt");
    printf("n righe : ",n);
    catalogo=(film*)malloc(n*sizeof (film)); //allocazione dinamica

    leggi(catalogo,LUNG,"listafilm.csv.txt");
    stampa(catalogo,LUNG);
    free(catalogo);
    return 0;

}
