#include<conio.h>
#include<stdio.h>
#include <stdlib.h>
main()
{
      int i,n;
      printf("Entrez une ytaille au tableau :");
      scanf("%d",&n);
      
      double t[n],s,max=0,moy;
      
      for(i=1;i<=n;i++)
      {  
         t[i] =(double) (rand()%2000)/100;
//           t[i] = (rand() / (double)RAND_MAX)*20 ;
           s += t[i];
           if(max < t[i])
            max = t[i] ;
      }
     printf("\n"); 
     for(i=1;i<=n;i++)
      printf("\n%.2lf",t[i]);
      
     printf("\nLe max est : %.2lf",max);
     printf("\nLe moyenne est : %.2lf",s/n);
   
getch();
}
      
