//partie3(technique de programmation): exponentiel
#include <conio.h>
#include <stdio.h>
main()
{
      float x,e,p=1;
      int n,i,f=1;
      
      printf("Entrez la valeur de X :");
      scanf("%f",&x);
      printf("Entrez la valeur de N :");
      scanf("%d",&n);
      
      e = 1;
      for(i=1;i<=n;i++)
      {
           f *= i;
           p *= x;
        e = e + (p / f);
      }
      printf("\n - l'exponentiel de %.2f = %.2f",x,e);
getch();
}
//                               PROGRAMME réalisé par : BELBSIR SAÂD ;)
