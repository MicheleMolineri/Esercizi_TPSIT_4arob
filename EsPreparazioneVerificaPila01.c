/*Esercizio 1
Usa una pila per l'inserimento dei dati
e stampa solamente i numeri pari e li sommi stampando il risultato*/

//Molineri Michele

#include <stdio.h>
#include <stdlib.h>
#define DIM 5

typedef struct node { 
    //dichiarazione della pila
    int num;
    struct node* next;
};


int isempty(struct node* head) { 
    return (head == NULL) ? 1 : 0; //se head == NULL return 1 (vuota) altrimenti 0 (carica)
}


struct node* pop(struct node ** headPila) {  
    //estrazione elemento dalla pila
    struct node* ret = *headPila;

    if(isempty(*headPila)) {
        return NULL;
    } else
        *headPila = ret->next;

    return ret;
}

void push(struct node** headPila, struct node* element) { 
    //inserimento elemento nella pila
    if (isempty(*headPila)) {
        *headPila = element;
        element->next = NULL;
    } else {
        element->next = *headPila;
        *headPila = element;
    }
    return;
}

void inserisciElementiPila(struct node* headPila, struct node* element) {
    int n ;
    for(int k=0; k<DIM; k++) { 
        //ciclo for per caricare i valori inseriti da tastiera
        printf("inserisci un numero: ");
        scanf("%d",&n);
        element = (struct node*)malloc(sizeof(struct node)); 
        element->num = n;

        push(headPila,element); // push elemento nella pila
    }

}

void caricaVettorePila(struct node** headPila,int vett[]){

    for(int k=0; k<DIM; k++) { //la pop rimuove i nodi dalla pila
        struct node* head = pop(headPila);
        vett[k] = head->num; //carico il vettore di appoggio con i valori tolti dalla pila
    }
}

int controllo(int vett[]){

    int somma=0;
    for(int k=0; k<DIM ;k++) {  //controllo numero pari
        if(vett[k]%2==0)
            somma+=vett[k];
    }
    return somma;
}

int main() {

    struct node* pila = NULL;    //dichiarazione pila
    struct node* elemento;
    int vett[DIM];          //vettore di appoggio
    int n,somma=0;            //elemento di input della pila  e somma finale
    int k=0;

    inserisciElementiPila(&pila,elemento);
    caricaVettorePila(&pila,vett);

    printf("la somma dei numeri pari inseriti nella pila e' %d \n",controllo(vett));

    return 0;
}

