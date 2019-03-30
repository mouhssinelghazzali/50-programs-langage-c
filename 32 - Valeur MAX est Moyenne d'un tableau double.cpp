#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

main()
{
      system("title Valeur Max est Moyenne d'un tableau");
      
      int i,n;
      double moy,T[100],s,max;
      
      printf("Entrez une taille au tableau : ");
      scanf("%d",&n);
      
      max = 0 ;
      for(i=1;i<=n;i++)
      {
                       printf("Entrez T[%d] :",i);
                       scanf("%lf",&T[i]);
          s+=T[i] ;
                  if ( T[i]>max )
                     max = T[i] ;
      }
      
      moy = s / n ;
      printf("\n \20 La moyenne = %.2lf",moy);
      printf("\n \20 La valeur MAX = %.2lf",max);
getch();
}
//                                PROGRAMME réalisé par : BELBSIR Saâd ;)
