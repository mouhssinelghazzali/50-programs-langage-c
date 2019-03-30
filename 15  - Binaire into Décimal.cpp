#include <conio.h>          /***********************************************/
#include <stdio.h>         /*   Programme C++ - Convertir vers Décimale   */
#include <stdlib.h>       /***********************************************/
main()
{
      system("title Binaire into Décimale");
      
      
      int nb,ND,NB,s,p,x,y;
      
nb:   printf("\n \20 Entrez un nombre binaire :");
      scanf("%d",&nb);
      
      //verification du nombre 'nb' s'il contient des chiffres différent de (0 et 1).
      NB = nb;
      x = nb;
      while(x > 0)
      {    y = x % 10 ;
              if(y != 0 && y != 1)
                goto nb;
           x /= 10 ;
      }
      //convertisseur du nombre binnaire vers décimale.
      ND = 0 ;
      p = 1 ;
      while ( nb > 0 )
      {
            s = nb % 10 ;
            nb /= 10 ;
            ND  = ND  + ( s * p ) ;
            p *= 2 ;
      }
      //affichage du résultat.
      printf("\n\n\n \20 le nombre (%d)2 en decimal = %d",NB,ND);
getch();
}
//                                                  Programme réalisé par :BELBSIR SAÂD ;)
