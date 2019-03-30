//exercice:4 examen de passage théorique 2010
// @@@@@@@@@@@@@ SYRACUS @@@@@@@@@@@@@
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
main()
{
      system("title Syracus");
      int n,N_t = 0;
      
      printf("Entrez un entier :");
      scanf("%d",&n);
      // verification de n doit etre strictement positif
      while(n < 0) {printf("l'entier doit etre strictement positif :"); scanf("%d",&n);}
      
      printf("\n - La liste des entiers obtenu :");
      while (n > 1)
      {
            if (n % 2 == 0) //si n est pair
              n = n / 2 ;
            else
              n = (n * 3) + 1 ;
      printf(" %d",n);
         N_t += 1;
      }
      
      printf("\n\n - On doit appliquer %d fois la transformation avant d'arriver a 1",N_t);
getch();
}
//                                     PROGRAMME réalisé par : BELBSIR SAÂD ;)
