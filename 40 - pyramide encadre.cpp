#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
main()
{
      int i,j,n;
      system("color 0E");
      system("title Pyramide");
      printf("Entrez nomber des lignes :");
      scanf("%d",&n);
      
      for(i=0;i<n;i++)
      {      printf("\n");
                    for(j=n;j>=i;j--)
                      printf(" ");
      printf("*");
                    for(j=2;j<=i*2;j++)
                      printf(" ");
          if (i>0)
           printf("*");
      }
      printf("\n ");
          for(j=0;j<=n;j++) printf("* ");                       
 printf("\n\n\n\n\t\20 PROGRAMME realise par : BELBSIR SAAD");
getch();     
}
//                               PROGRAMME réalisé par : BELBSIR SAAD
