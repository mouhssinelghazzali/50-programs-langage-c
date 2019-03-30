#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
main()
{
      system("title Transposition d'une MATRICE");

      int i,j,N,M;
      char t[100][100],tA[100][100];
      printf("Entrez nombre des lignes :");
      scanf("%d",&N);
      printf("Entrez nombre des colonnes :");
      scanf("%d",&M);
      //remplire tableau 't'
      for(i=1;i<=N;i++)
      {                for(j=1;j<=M;j++)
                       {                printf("Entrez une caractere :");
                                        scanf("%s",&t[i][j]);
                       }
      }
      //transposé tableau t -> tA
      for(i=1;i<=N;i++)
      {for(j=1;j<=M;j++)
         tA[j][i] = t[i][j] ;
      }
      printf("\n\n");
      //affichage tableau t
      for(i=1;i<=N;i++)
      { printf("\n");  for(j=1;j<=M;j++)
                               printf(" %c ",t[i][j]);
      }
      printf("\n\n\n");
      //affichage tableau tA
      for(i=1;i<=M;i++)
      { printf("\n\n");  for(j=1;j<=N;j++)
                               printf(" %c",tA[i][j]);
      }
getch();
}
//                                            PROGRAMME réalisé par : BELBSIR SAÂD ;)
