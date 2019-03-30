#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
                    /* @@@@@@@@@  LE PLUS GRAND COMMUN MULTIPLE @@@@@@@@@ */
main()
{
      system("title PGCM");

      int a,b,n,p;
      printf("Entrez A :");
      scanf("%d",&a);
      printf("Entrez B :");
      scanf("%d",&b);
      n=a;
      p=b;
      while(a!=b)
      {
                 if(a<b)
                        a+=n;
                 else if(a>b)
                             b+=p;
      }
      printf("\n\20 le PGCM est : %d",a);
getch();
}
//                                  PROGRAMME réalisé par : BELBSIR SAÂD ;)
