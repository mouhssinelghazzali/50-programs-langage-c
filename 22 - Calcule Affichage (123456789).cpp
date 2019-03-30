#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
main()
{
      system("title Calcule Affichage");
      system("color F0");
      
      int n=123456789, i, j, T[10],k=9;
      
      T[1] = n;
      for(i=2;i<=9;i++) // division de n ;
      {   n /= 10 ;   T[i] = n ;   }
      
      for(i=1;i<=9;i++)
      {
         printf("\n");// saut ligne
                         for (j=9;j>=i;j--) // boucle Espace .
                           printf(" ");
              
            printf("%d * 8 + %d = %d",T[k+1],i,T[k--] * 8 + i);
      }
      
getch();
}
//                                                Programme réalisé par :BELBSIR SAÂD ;)
