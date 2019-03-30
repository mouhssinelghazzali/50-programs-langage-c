#include<conio.h>
#include<stdio.h>
#include <stdlib.h>
main()
{
      int i,n,s;
      printf("Entrez une ytaille au tableau :");
      scanf("%d",&n);
      
      int t[n],t1[n];
      
      for(i=1;i<=n;i++)
      {  s = rand();
         t[i] = s;
         t1[i] = s%(40 - 20) +20;
      }
     printf("t :\n"); 
     for(i=1;i<=n;i++)
      printf("\n%d",t[i]);
      
     printf("\n\nt1 :\n");      
      for(i=1;i<=n;i++)
      printf("\n%d",t1[i]);
getch();
}
      
