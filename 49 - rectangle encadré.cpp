#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
main()
{
      system("color 0A");
      
      int i,j,nl,nc;
      
      printf("\n\n  \32 Entrez taille des lignes :");
      scanf("%d",&nl);
      printf("   \32 Entrez taille des colonnes :");
      scanf("%d",&nc);
      
      for(i=1;i<=nl;i++)
      {                 printf("\n\t\t*");
                        if (i == 1 || i == nl)
                        {  for(j=2;j<=nc;j++)
                               printf("*");
                        }
                        else
                        {   for(j=2;j<nc;j++)
                               printf(" ");
                        printf("*");
                        }
      }
printf("\n\n\n\n\t\t\20 PROGRAMME realise par : BELBSIR SAAD \1");
getch();
}
//                                  PROGRAMME réalisé par : BELBSIR SAÂD ;)
