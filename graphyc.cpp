#include <conio.h>
#include <stdio.h>
main()
{
      int i,j,n,k;
      printf("Entrez taille :");
      scanf("%d",&n);k=n*2;
      
      for(i=1;i<n*2;i++)
      {printf("\n");
      if(i<=n)
      {   for(j=n;j>=i;j--)
           printf(" ");
          printf("*");
          for(j=4;j<=i*2;j++)
           printf(" ");
      }
      else
      {k=k-2;
         for(j=n;j<=i;j++)
           printf(" ");
         printf("*");
         for(j=4;j<=k;j++)
           printf(" ");
      }
          if((i > 1) && (i < (n*2)-1))    printf("*");
      }
getch();
}
//                                 PROGRAMME réalisé par : BELBSIR SAÂD ;)
