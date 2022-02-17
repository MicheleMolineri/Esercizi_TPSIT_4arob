#include <stdio.h>
#include <stdlib.h>
#define NR 10
#define NC 10


void inserisciNum(float mat[][NC])
{
    printf("a che coordinata x vuoi mettere il numero:");
    int x;
    scanf ("%d",&x);
    printf("a che coordinata y vuoi mettere il numero:");
    int y;
    scanf ("%d",&y);
    printf("che numero vuoi inserire :");
    float num;
    scanf("%f",&num);

    mat[x][y]=num;
}

void stampaMat(float mat[][NC],int nr,int nc)
{
//stampa matrice
    for(int r=0; r<nr; r++)
    {
        for(int c=0; c<nc; c++)
        {
            printf("\t %.2f",mat[r][c]);
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

    float **mat=(float **)malloc(nr *sizeof(float));
    for(k=0; k<nr; k++)
    {
        mat[k]=(float *)malloc(nc *sizeof(float));
    }

    //assegno tutti valori zero
    for(int r=0; r<nr; r++)
    {
        for(int c=0; c<nc; c++)
        {
            mat[r][c]=0;
        }
    }

    stampaMat(mat,nr,nc);

    printf("quanti numeri vuoi inserire :");
    scanf("%d",&num);
    for(int j=0; j<num; j++)
    {
        inserisciNum(mat);
    }
    stampaMat(mat,nr,nc);

}
