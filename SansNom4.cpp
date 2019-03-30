#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
main()
{
      system("title Transfére d'un Matrice à un tableau a une seul dimension");
      
      int i,j,L,C,s=1;
      char M[10][10],V[100];
      
      printf("Entrez nombre des lignes :");
      scanf("%d",&L);
      printf("Entrez nombre des colonnes :");
      scanf("%d",&C);
      for(i=1;i<=L;i++)
      {                for(j=1;j<=C;j++)
                       {                
                                        printf("Entrez une caractere :");
                                        scanf("%s",&M[i][j]);
                       }
                       V[s++] = M[i][j] ;
      }
}
