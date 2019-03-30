#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

main()
{
      system("title Calcule Affichage 2 (98765432)");
      system("color e");
      
      int i,j,n=98765432,T[8];
      
      T[0] = n ;
      for(i=1;i<=7;i++)
      {  T[i] = n / 10 ; n /= 10 ;  }
      
      for ( i = 7 ; i >= 0 ; i-- )
      {   
          for(j=0;j<=i;j++) 
           printf(" ");
           
          printf("%d * 9 + %d = %d\n",T[i],i,T[i]*9+i);
      }
getch();
}
//                                                  Programme réalisé par :BELBSIR SAÂD ;)
