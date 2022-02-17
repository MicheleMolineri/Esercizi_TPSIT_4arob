#include <stdio.h>
#include <stdlib.h>



int main()
{
   int n,k,i,num;
   printf("inserisci num elementi : ");
   scanf("%d",&n);
    int *v=(int *)malloc(n *sizeof(int));
    int *vNonRipetuti=(int *)malloc(n *sizeof(int));

    for(int k=0;k<n;k++){
        printf("inserisci un elemento : ");
        scanf("%d",&num);
        *(v+k)=num;
    }

   for( k=0;k<n;k++){
     for(int j=0;j<n;j++){
      if(*(v+k)==*(v+j)){
       *(vNonRipetuti+i)=*(v+k) ;
       i++;
      }
   }
   }

int somma;
   for(k=0;k<n;k++){
    somma += *(vNonRipetuti+k);
   }
   printf("%d", somma);

   free(v);
   free(vNonRipetuti);
}
