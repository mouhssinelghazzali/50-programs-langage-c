#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

main()
{
      system("title Suppression occurence d'un X donn�e");
      
      int A[100],i,j,n,x;
      
      printf("Entrez N :");
      scanf("%d",&n);
      
      for(i=1;i<=n;i++)
      {printf("Entrez A[%d] :",i);
       scanf("%d",&A[i]);}
       
      printf("\nEntrez X :");
      scanf("%d",&x);
      
      for(i=1;i<=n;i++)
      {
                       if ( A[i] == x )
                       {
                            for(j=i;j<=n;j++)
                              A[j] = A[j+1];
                        n--;
                        }
      }
      printf("\n");
      for(i=1;i<=n;i++)
      printf(" %d,",A[i]);
getch();
}
//                                             Programme r�alis� par :BELBSIR SA�D ;)
