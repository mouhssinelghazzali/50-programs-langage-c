//le deuxieum plus grand nombre d'un tableau.
#include <conio.h>
#include <stdio.h>
main()
{
      int i,j,n,max,dmax,t[100],p;
      
      printf("Entrez nombre des entier que vous souhaite saisie dans le tableau :");
      scanf("%d",&n);
      //remplissage
      for(i=1;i<=n;i++) {printf("Entrez T[%d] :",i); scanf("%d",&t[i]);}
      //recherche max
      max = t[1] ;
      for(i=2;i<=n;i++)
      {
          if (t[i] > max) 
          {max = t[i] ;
           p = i;}
      }
      printf("\n - Le max est %d",max);
      /**************** methode 1 *************/
      //recherche 2éme max
      dmax = t[1];
      for(i=2;i<=n;i++)
      {  if ((t[i] > dmax) && (t[i] < max))
            dmax = t[i];
      }
      printf("\n - Le Deuxieum plus grand nombre est : %d",dmax);
      /**************** methode 2 *************/
      //recherche le deuxieum max (3iyana) fiha des problemme ,si par exemple on as 2 nombre max.
      max = t[1];
      for(i=2;i<=n;i++)
      {                if (i == p)
                         continue;
                 if(t[i] > max)
                  max = t[i];
      }
      printf("\n - Le deuxieum plus grand nombre est : %d",max);
      
getch();
}
//                                  PROGRAMME réalisé par : BELBSIR SAÂD ;)
