#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

bool NombreParfait(int n)
{
     int i,j,s=0;
     
     for ( i = 1 ; i <= n/2 ; i++ )
     {
         if ( n % i == 0 )
              s += i ;
     }
     if ( s == n )
     return(true);
     else
     return(false);
}
main()
{
      system("title Nombre Parfait____Fonction - Lister  50  Nombre Parfait");
      system("color 70");
      
      int N ;
      
      printf("Entrez N :");
      scanf("%d",&N);
      
      if ( NombreParfait(N) == true )
      printf("\n \20 %d est un Nombre Parfait.\n\n",N);
      else
      printf("\n \20 %d est N'EST PAS un Nombre Parfait.\n\n",N);
      
      int i,j,s ;
      
      printf("Liste des 500 Nombres Parfaits :\n \32");
      for ( i = 5 ; i <= 500 ; i++ )
      {
          s=0;
          for ( j = 1 ; j <= i/2 ; j++ )
          {
              if ( i % j == 0 )
               s += j ;
          }
          
        if ( s == i )
        printf(" %d,",i);
      }
      
getch();
}
//                                   Programme réalisé par : BELBSIR SAÂD ;)
