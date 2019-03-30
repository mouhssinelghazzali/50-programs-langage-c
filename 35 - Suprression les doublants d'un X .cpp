#include <conio.h>      /*********************************************/
#include <stdio.h>     /*              Programme en C++             */
main()                /*      Suppression les doublants d'un x     */
{                    /*********************************************/
      int T[100],i,n,x,j,k=0;
      
      printf("Entrez une taille au tableau :");
      scanf("%d",&n);
      
      for(i=1;i<=n;i++)
      {
                       printf("Entrez T[%d] :",i);
                       scanf("%d",&T[i]);
      }
      printf("\n\nTableau Avant :\n");
      for(i=1;i<=n;i++)
        printf(" %d,",T[i]);
      
      printf("\nEntrez X :");
      scanf("%d",&x);
      
      for(i=1;i<=n;i++)
      {
                       if ( T[i] == x )
                       {
                            k++ ;
                            if ( k > 1 )
                            {
                                 for(j=i;j<n;j++)
                                      T[j] = T[j+1];
                                 n--;
                                 i--;
                            }
                       }
      }
      printf("\n\nTableau Apres :\n");
      for(i=1;i<=n;i++)
       printf(" %d,",T[i]);
getch();
}
//                                    PROGRAMME réalisé par : BELBSIR SAÂD ;)
