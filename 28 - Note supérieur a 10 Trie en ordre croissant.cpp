#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct etudiant
{
       int note;
       char nom[20];
       char prenom[20];
} T[50], p;

main()
{
      system("title Note supérieur à 10 ,Trie");
      
      int i,j,n;
      
      printf("Entrez nombres des etudiants :");
      scanf("%d",&n);
      
      while(n<0)
      {printf("\nLe nombre des etudiant doit etre superieur a 0 !\nEntrez nombre des etudiants : ");
       scanf("%d",&n);}
      
      for(i=1;i<=n;i++)
      {    printf("\nEtudiant %d :\n",i);
                       printf("Entrez Nom :");
                       scanf("%s",&T[i].nom);
                       printf("Entrez Prenom :");
                       scanf("%s",&T[i].prenom);
                       printf("Entrez note :");
                       scanf("%d",&T[i].note);
                 while(T[i].note<0 || T[i].note>20)
                 {     printf("La note doit etre entre 0 et 20 \nEntrez note :");
                       scanf("%d",&T[i].note);
                 }
      }
      
      for(i=1;i<=n;i++)
      {     for(j=1;j<=n-i;j++)
            {     if(strcmp(T[j].nom,T[j+1].nom) == 1)
                  {     p = T[j] ;  T[j] = T[j+1] ; T[j+1] = p;    }
            }
      }
      printf("\nLes etudiant qui ont la note superieur a 10 :\n");
      printf("\nNom\t\tPrenom\t\tNote");
      for(i=1;i<=n;i++)
      {  if(T[i].note > 10)
            printf("\n%s\t\t%s\t\t%d",T[i].nom,T[i].prenom,T[i].note);
      }
getch();
}
//                                        PROGRAMME réalisé par : ~ BELBSIR SAÂD ~ ;)
