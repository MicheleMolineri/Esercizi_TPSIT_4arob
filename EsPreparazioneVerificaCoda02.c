/*
Esercizio 2
Usa una coda per l'inserimento dei dati  
stampa solamente i num dispari e li sommi stampando il risultato*/


//Molineri Michele
#include <stdio.h>
#include <stdlib.h>
#define DIM 5

typedef struct node {
    //dichiarazione coda
    int element;
    struct node* next;
};

int isempty(struct node* head) {
    return (head == NULL) ? 1 : 0;
}

void enqueue(struct node** head, struct node** tail, struct node* element) {

    if(isempty(*head))
        *head = element;
    else
        (*tail)->next = element;

    *tail = element;
    element->next = NULL;

    return;
}

struct node* dequeue(struct node** head,struct node** tail) {

    struct node* ret = *head;

    if(isempty(*head))
        return NULL;
    else
        *head = ret->next;

    if(*head == NULL)
        *tail = NULL;

    return ret;
}

void inserisciElementiCoda(struct node** head,struct node** tail, struct node* appoggio){
    for(int k=0; k<DIM; k++) {
        appoggio = (struct node*) malloc(sizeof(struct node));
        printf("inserisci un numero da mettere nella coda: ");
        scanf("%d",&appoggio->element);

        enqueue(head,tail,appoggio);
    }
}

void inserisciElementiVettore(struct node** head,struct node** tail, struct node* appoggio,int vett[]){
    for(int k=0; k<DIM; k++) {
        struct node* appoggio = dequeue(head,tail);
        vett[k] = appoggio->element;
    }
}

int controllo(int vett[]){
    int somma=0;
    for(int k=0; k<DIM; k++) {
        if(vett[k]%2!=0)
            somma+=vett[k];
    }
    return somma;
}

int main() {
    struct node* head=NULL;
    struct node* tail=NULL;
    struct node* appoggio;

    int vett[DIM];    

    inserisciElementiCoda(&head,&tail,appoggio);  
    inserisciElementiVettore(&head,&tail,appoggio,vett);  
    

    printf("la somma dei numeri dispari della coda e': %d\n",controllo(vett));
    return 0;

}