#include <stdio.h>
#include <stdlib.h>
#define LUNG 20
#include <string.h>
#include <stdbool.h>

bool polindormo(char st[],int dim)
{
    bool ok=true;
    int i=0;

    while(ok==true && i<dim/2)
    {
        if(*(st+i)==*(st+dim-i-1))
        {
            i++;
        }
        else
        {
            ok=false;
        }
    }
    return ok;
}

int dimStringa(char stringa[])
{
    int k=0;
    int conta=0;
    for(k=0; *(stringa+k)!='\0'; k++)
    {
        conta++;
    }
    return conta;
}

int main()
{

    char *stringa=(char *)malloc(LUNG *sizeof(char));
    printf("inserisci una stringa: ");
    scanf("%s",stringa);
    int m;
    int  n = dimStringa(stringa);
    printf("dimensione della stringa: %d\n",n);
    bool poli= polindormo(stringa,n);
    if(poli==true)
        printf("e' polindroma");
    else
        printf(" non e' polindroma");
}

