#include <conio.h>   /**********************************************/
#include <stdio.h>   /*     Convertir un montant en billet de      */
#include <stdlib.h>  /*     200 ,100 ,50 , 20 ,10 , 5 ,2 , 1       */
                     /**********************************************/
main()
{
      system("title Convertir en Billet");
      
      long n,MT; 
      int MD;
      printf("Entrez Le Montant :");
      scanf("%d",&n);      
while(n>0)
{
      if      (n>=200){ MD = 200 ; MT = n / 200 ;  n = n % 200 ;}
      else if (n>=100){ MD = 100 ; MT = n / 100 ;  n = n % 100 ;}
      else if (n>=50) { MD =  50 ; MT = n / 50  ;  n = n % 50  ;}
      else if (n>=20) { MD =  20 ; MT = n / 20  ;  n = n % 20  ;}
      else if (n>=10) { MD =  10 ; MT = n / 10  ;  n = n % 10  ;}
      else if (n>=5)  { MD =  5  ; MT = n / 5   ;  n = n % 5   ;}
      else if (n>=2)  { MD =  2  ; MT = n / 2   ;  n = n % 2   ;}
      else if (n>=1)  { MD =  1  ; n = n % 1   ;}
      
      printf("\n\n \20 Nombre des billet de %d est : %d",MD,MT);
}
getch();
}
//                                      Programme réalisé par :BELBSIR SAÂD ;)
