#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
main()
{
      system("title Premier / Non premier");
      
      long n,i;
      bool pnp;
      
      printf("Entrez une Valeur :");
      scanf("%d",&n);
      
      pnp = true ;
for ( i=2 ; i < n ; i++ )
{
    if ( n % i == 0 )
    pnp = false ;
}
      if ( pnp == true )
      printf("\n\n \20 La valeur %d est Premier\n",n);
      else
      printf("\n\n \20 La valeur %d est NON Premier\n",n);
getch();
}
//                                                      Programme réalisé par : BELBSIR SAÂD ;)
