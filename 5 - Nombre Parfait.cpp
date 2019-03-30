#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
main()
{

      int i,s=0;
      long n;
      
      printf("Entrez un Entier :");
      scanf("%d",&n);
      
      for(i=1;i<=n/2;i++)
      {
               if (n%i==0)
                    s += i;
      }
      if (s == n)
         printf("\n \20 %d est un Nombre Parfait",n);
      else
         printf("\n \20 %d N'est pas un Nombre Parfait",n);
getch();
}

