   #include <conio.h>
#include <stdio.h>
#include <stdlib.h>
main()
{
      system("title 18 = 3 x 3 x 2");
      int n,i;
      
      printf("Entrez un entier :");
      scanf("%d",&n);
      
      i=2;
      printf("\n\n\20 %d = 1",n);
while(n>1)
{
          if (n%i==0)
          {
                     n/=i;
                     printf(" * %d",i);
          }
          else
                     i++;
}
getch();
}
//                                                      Programme réalisé par : BELBSIR SAÂD ;)
