#include <conio.h>          /***********************************************/
#include <stdio.h>         /*   Programme C++ - Convertir vers D�cimale   */
#include <stdlib.h>       /***********************************************/
main()
{
      system("title Binaire into D�cimale");
      
      
      int nb,ND,NB,s,p,x,y;
      
nb:   printf("\n \20 Entrez un nombre binaire :");
      scanf("%d",&nb);
      
      //verification du nombre 'nb' s'il contient des chiffres diff�rent de (0 et 1).
      NB = nb;
      x = nb;
      while(x > 0)
      {    y = x % 10 ;
              if(y != 0 && y != 1)
                goto nb;
           x /= 10 ;
      }
      //convertisseur du nombre binnaire vers d�cimale.
      ND = 0 ;
      p = 1 ;
      while ( nb > 0 )
      {
            s = nb % 10 ;
            nb /= 10 ;
            ND  = ND  + ( s * p ) ;
            p *= 2 ;
      }
      //affichage du r�sultat.
      printf("\n\n\n \20 le nombre (%d)2 en decimal = %d",NB,ND);
getch();
}
//                                                  Programme r�alis� par :BELBSIR SA�D ;)
