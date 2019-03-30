#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

main()
{
      system("title Nombre Abondant");
      
      int n,i,j;
      
      for(i=1;i<=50;i++)
      {
         n=0;
         
         for(j=1;j<i;j++)
         {    if ( i % j == 0 )
                 n = n +j;
         }
            if ( n > i )
            printf(" %d,",i);
      }
getch();
}
//                            Programme réalisé par  : BELBSIR Saâd ;)

/* Nombre Abondant :
                    est un nombre naturel qui est stritement 'inférieur' à la somme des ses 'diviseurs'
                    DIVISEUR >  NOMBRE (Abondant)                                                        */
