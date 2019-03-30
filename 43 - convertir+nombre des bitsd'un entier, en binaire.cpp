#include <conio.h>
#include <stdio.h>
//fonction qui retourne nombre des bits necessaire pour présenter un entier naturel n.
int nombre_bit(int n)
{
    int bit = 0 ,s = 1 ;
    
    while (s <= n)
    {
          s *= 2;
          bit += 1;
    }
    return (bit) ;
}
main()
{
      int i=0,n,t[60];
      
      printf("Entrez un entier naturel :");
      scanf("%d",&n);
      
      printf("\n\n \20 nombre des bits necessaire pour presenter %d est : %d\n\n",n,nombre_bit(n));
      
      while (n > 0)
      {     t[i++] = n % 2 ;
            n /= 2;
      }
      
      i--;
      printf("\n \20 La representation en binaire : ");
      for(;i>=0;i--)
       printf("%d",t[i]);
getch();
}
//                                      PROGRAMME réalisé par : BELBSIR SAÂD ;)
