#include <conio.h>
#include <stdio.h>
//                              RECHERCHE DICHOTOMIE
main()
{
      int mil,fin,val,debut,n,i,j;
      int T[100];
      bool tr;
      
      printf("Entrez une taille au tableau :");
      scanf("%d",&n);
      //initialiser
      debut = 0 ;
      fin = n ;
      tr = false ;
      //remplisage
      for(i=0;i<=n;i++)
      {printf("Entrez T[%d] : ",i); scanf("%d",&T[i]);}
      //tri
      for(i=0;i<=n;i++)
      {for(j=0;j<n;j++)
       {if (T[j] > T[j+1])
        {   val = T[j];
           T[j] = T[j+1];
           T[j+1] = val;
        }
       }
      }
      //affichage apres le tri
      for(i=0;i<=n;i++)
      {printf("%d ",T[i]);}
      //element a rechercher
      printf("\n - Entrez l'element a rechercher : ");
      scanf("%d",&val);
      do
      {
           mil =(int) ((fin-debut)/2) ;
           
           if ( T[mil] == val )
              tr = true ;
           else if ( T[mil] < val )
                   debut = mil + 1 ;
           else
                   fin  = mil - 1  ;
      }
      while(tr == false && debut < fin);
      
      if (tr == true)
         printf("\n La Valeur %d est au rang : %d",val,mil+1);
      else
          printf("\n La Valeur %d n'est pas dans le tableau",val);
getch();
}
//                                PROGRAMME réalisé par : BELBSIR SAÂD ;)
