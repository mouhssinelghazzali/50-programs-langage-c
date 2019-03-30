#include <conio.h>
#include <cstdio>
#include <cstdlib>
                    /* @@@@@@@@@  LE PLUS GRAND COMMUN DIVISEUR @@@@@@@@@ */
main()
{
      int a,b;
      system ("title PGCD");
      
      printf("Entrez A :");
      scanf("%d",&a);
      printf("Entrez B :");
      scanf("%d",&b);
      while(a!=b)
      {
              if (a>b)
                 a -= b;
                 
              else if (a<b)
                      b -= a;
      }
      printf("\n\20 le PGCD est : %d",a);
getch();
}
//                          PROGRAMME réalisé par : BELBSIR SAÂD ;)
