#include <conio.h>        /******************************************************************/
#include <stdio.h>       /*  Programme C++ - Convertir un nombre DECIMALE vers le BINAIRE  */
#include <stdlib.h>     /******************************************************************/
main()
{
      system("title Convertir vers Binaire");
      
      int i,k=1,n,T[1000];
      printf("Entrez une valeur :");
      scanf("%d",&n);      
      while ( n > 0 )
      {
            T[k++] = n % 2;
            n/=2;
      }
      for(i=k-1;i>=1;i--)
         printf("%d",T[i]);
getch();
}
//                                  Programme réalisé par :BELBSIR SAÂD ;)
