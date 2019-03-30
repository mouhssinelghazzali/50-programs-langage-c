//Traingle isocéle
#include <conio.h>
#include <stdio.h>
main()
{
      int i , j, n;
      
      printf("Entrez nombre des lignes : ");
      scanf("%d",&n);
      
      for(i=1;i<=n*2;i+=2)
      {        printf("\n");
                    for(j=n*2;j>=i;j-=2)
                      printf(" ");
                    for(j=1;j<=i;j++)
                      printf("*");
       }
getch();
}
//                                   PROGRAMME réalisé par : BELBSIR SAÂD ;)
