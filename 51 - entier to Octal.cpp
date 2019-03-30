//Convertir un nombre entier en Octal.
#include <conio.h>
#include <stdio.h>
main()
{
      int N,T[500],j=1;
      
      printf("Entrez un entier : ");
      scanf("%d",&N);
      
      while(N > 0)
      {
              T[j++] = N % 8 ;
              N /= 8 ;    // Ou N = N / 8;
      }
      
      printf("\n - La représentation en Octal : ");
      for(int i=(j-1) ;i >= 1;i--)
              printf("%d",T[i]);

getch();
}
//                       PROGRAMME réalisé par : BELBSIR SAÂD ;)
