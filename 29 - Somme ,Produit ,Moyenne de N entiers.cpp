#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
main()
{
      system("title Somme ,Produit ,Moyenne de N entier");
      
      int N,s=0,p=1,i,entier;
      double moy;
      
      printf("Entrez N(nombres des entiers) : ");
      scanf("%d",&N);
      
      for(i=1;i<=N;i++)
      {
                       printf("Entrez entier %d : ",i);
                       scanf("%d",&entier);
                       
                       s += entier ; // Somme.
                       p *= entier ;// Produit.
      }
      moy = s / N;
      
      printf("\n\20 Leur Somme = %d",s);
      printf("\n\20 Leur Produit = %d",p);
      printf("\n\20 Leur Moyenne = %.2lf",moy);
getch();
}
//                                           PROGRAMME réalisé par : BELBSIR SAÂD ;)
