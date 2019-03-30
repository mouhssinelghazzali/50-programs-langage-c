#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

main()
{
      system("title Présentation d'un nombre binaire en 10 bit");
      
      int T[10],i,n;
      
      printf("Entrez un nombre binaire :");
      scanf("%d",&n);
      
      for(i=0;i<=9;i++)
       T[i] = 0 ;
       
       
      i=9;
      while (n > 0){     T[i] = n % 10;
                         n = n / 10;
                         i = i - 1;
                   }
                   
      for(i=0;i<=9;i++)
       printf(" %d",T[i]);
       
getch();
}
//                                           Programme réalisé par : BELBSIR SAÂD ;)
