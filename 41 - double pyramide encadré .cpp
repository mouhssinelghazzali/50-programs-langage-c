#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
main()
{
      int i,j,n,k;
     system("color 0A");
     system("title Pyramide");
      printf("\n\n \32 Entrez nomber des lignes : ");
      scanf("%d",&n);
/*                   /\                  */
      for(i=0;i<=n;i++)
      {      printf("\n\t\t");
                    for(j=n;j>=i;j--)    printf(" ");
      printf("*");
                    for(j=2;j<=i*2;j++)  printf(" ");
      if (i>0)
          printf("*");
      }
/*                   \/                  */      
      k = n * 2;
      for(i=0;i<n;i++)
      {      printf("\n\t\t");
                    for(j=0;j<=i+1;j++)   printf(" ");
      printf("*");
                    for(j=3;j<k;j++)      printf(" ");
      if (k>2)
         printf("*");
      k-=2;
      }
       printf("\n\n\n\n\t\20 PROGRAMME realise par : BELBSIR SAAD");
getch();     
}
//                                   PROGRAMME réalisé par : BELBSIR SAAD ;)
