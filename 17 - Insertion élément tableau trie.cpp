#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

main()
{
      system("title Insertion élément dans un tableau(int) trie");
      
      int T[100],n,i,j,x,p;
      
      printf("Entrez N :");
      scanf("%d",&n);
      
      for(i=1;i<=n;i++)
      {printf("Entrez T[%d] :",i);
       scanf("%d",&T[i]);}
      
      printf("\nAvant :");
      for(i=1;i<=n;i++)
       printf(" %d,",T[i]);
       
      printf("\nEntrez X :");
      scanf("%d",&x);

      for(i=1;i<=n;i++)
      {
                    if(T[i] >= x)
                    { for(j=n;j>=i;j--)
                       {T[j+1] = T[j];}
                        T[i] = x ;
                        break ;
                    }
      }

      printf("\n\nApres :");
      for(i=1;i<=n+1;i++)
       printf(" %d,",T[i]);
getch();
}
//                                      Programme réalisé par :BELBSIR SAÂD ;)
