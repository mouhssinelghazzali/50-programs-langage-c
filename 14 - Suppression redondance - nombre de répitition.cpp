#include <conio.h>          /**********************************************/
#include <stdio.h>         /*   Programme C++ - Suppression Redondance   */
#include <stdlib.h>       /**********************************************/
main()
{
      system("title Suppression redondance");
      
      int i,j,n,k,s,T[100],P[100],R[100];
      bool b;
      
      printf("Entrez une taille au tableau T :");
      scanf("%d",&n);
      //remplissage T :
      for (i=1;i<=n;i++)
      {printf("Entrez T[%d] :",i);
       scanf("%d",&T[i]);}
       //affichage T.
      printf("\n\n \20 Affichage du tableau T :\n");
      for(i=1;i<=n;i++)
        printf(" %d,",T[i]);
      //programme qui supprimme les répitition.
      k=2;
      P[1] = T[1];
      for (i=2 ; i<=n ;i++)
      {   b = false;
          for (j=1;j<=k-1;j++)
          {
              if(T[i] == P[j])
              { b=true; break; }
          }
        if (b == false)
        {     
            P[k] = T[i] ;
            k++ ;
        }
      }
      //affichage P.
      printf("\n\n \20 Affichage du tableau P :\n");
      for (i=1;i<k;i++)
        printf(" %d,",P[i]);
      //programme qui calcule nombre de répitition.
      for(i=1;i<k;i++)
      {  s = 0 ;
         for(j=1;j<=n;j++)
         {  if(P[i]==T[j])
                   s++;
         }
         R[i]=s;
      }
      //affichage du tableau R.
      printf("\n\n \20 Affichage du tableau R :\n");
      for(i=1;i<k;i++)
        printf(" %d,",R[i]);
getch();
}
//                                          Programme réalisé par :BELBSIR SAÂD ;)
