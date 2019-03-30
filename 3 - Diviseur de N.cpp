#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
main()
{
      system("title Diviseur");
      int D[500],n,i,k=1;
      
      printf("Entrez N :");
      scanf("%d",&n);
      
      for(i=1;i<=n/2;i++)
      {
              if(n%i==0)
               D[k++] = i ;
      }
      for(i=1;i<k;i++)
         printf("%d ,",D[i]);
getch();
}
//                          PROGRAMME réalisé par : BELBSIR SAÂD ;)
