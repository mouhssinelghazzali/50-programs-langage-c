#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
main()
{
      system("title Les Nombres Parfaits");
      
      long long i,j,s,n;
      
      printf("Entrez une Valeur :");
      scanf("%d",&n);
      
      for( i=6 ; i <= n ; i++)
      {   s=0;
            for( j=1 ; j <= i/2 ; j++)
            {
                  if(i % j == 0)
                     { s += j;}
            }
         if (s == i)
           printf("%d ,",i);
      }
getch();
}
//                          PROGRAMME réalisé par : BELBSIR SAÂD ;)
