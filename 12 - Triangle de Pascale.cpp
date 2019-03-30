#include <conio.h>        /*****************************************/
#include <stdio.h>       /*  Programme C++ - Triangle de pascale  */
#include <stdlib.h>     /*****************************************/
main()
{
      system("title Triangle de Pascale");

      int i,j,n,T[100][100];

      printf("Entrez nombre des lignes :");
      scanf("%d",&n);

      for(i=1;i<=n-1;i++)
      {    T[i][1] = 1;
                      for(j=1;j<=i;j++)
                          T[i+1][j+1] = T[i][j+1]+T[i][j];
      }
      T[n][1] = 1 ;
      //Affichage du Triangle
      for(i=1;i<=n;i++)
      {printf("\n");
       for(j=1;j<=i;j++)
        printf(" %d ",T[i][j]);
      }
getch();
}
//                                    Programme réalisé par :BELBSIR SAÂD ;)
