#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *next;
    int num
} Node;

Node *createNode(int val, Node*nodo)
{
    Node*succ=(Node*)malloc(sizeof(Node));

    if(nodo!=NULL){
        nodo->next=succ;
    }
    succ->num=val;
    succ->next=NULL;

    return succ;
}



int main(){
    int array[]= {1,2,3,4,5};
    Node *head = NULL;
    Node *cur= NULL ; //ci permette di scorrere la lista

    for (int i=0 ; i<6; i++){
        cur=createNode(array[i],cur); //aggiunge l'ultimo nodo della lista
        if(head==NULL){ head=cur;}
    }
//cur ora punta all'ultimo
    cur=head;
    while (cur!=NULL){
        printf("%d\n", cur->num);
        cur=cur->next;
    }
}
