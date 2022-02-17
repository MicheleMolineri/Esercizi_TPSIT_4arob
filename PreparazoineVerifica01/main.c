#include <stdio.h>
#include <stdlib.h>
#define NR 10
#define NC 10

void caricaMatrice(int mat[][NC],int nr ,int nc){
    int r,c,num;
    for(r=0;r<nr;r++){
        for(c=0;c<nc;c++){
        printf("inserisci l' elemento da inserire nella colonna %d della riga %d : ",c,r);
        scanf("%d",&num);
        mat[r][c]=num;
    }
}
}

void stampaMat(int mat[][NC],int nr,int nc)
{
//stampa matrice
    for(int r=0; r<nr; r++)
    {
        for(int c=0; c<nc; c++)
        {
            printf("\t %d",mat[r][c]);
        }
        printf("\n");
    }
}

int main()
{
    int nr,nc,k,r,c,num;
    printf("Inserisci numero di righe: ");
    scanf("%d", &nr);
    printf("Inserisci numero di colonne: ");
    scanf("%d", &nc);

    //malloc matrice

    int **mat=(int **)malloc(nr *sizeof(int));
    for(k=0; k<nr; k++)
    {
        mat[k]=(int *)malloc(nc *sizeof(int));
    }

    caricaMatrice(mat,nr,nc);
    stampaMat(mat,nr,nc);

}
