#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main()
{
      system("title Jeux Table circulaire");
      
      int i,j,s,m,P1,k;
      signed int a=-1;
      char prenom[100][20],cfrm;
do
{     system("cls"); 
      printf(" - Entrez nombre des personne :");
      scanf("%d",&m);   // M
      for(i=0;i<m;i++)
      {
                     printf("\n\t\32 Entrez Prenom %d :",i+1);
                     scanf("%s",&prenom[i]);
      }
      printf("\n - Entrez le numero du joueur qui commencera le jeux :");
      scanf("%d",&P1);    // P1
      P1--;
      printf("\n - Entrez K(valeur qui elemine un joueur apres une tour) :");
      scanf("%d",&k);  // K
      i = 1 ;
      s = P1 ;
      while(m > 1)
      {
             if(i==k)
             {       for(j=s;j<m;j++)
                       strcpy(prenom[j],prenom[j+1]);
               m-- ;
               s-- ;
               i = 0 ;
             }
         if(s==(m-1))
              s=a;
      i++;
      s++;
      }
      printf("\n \20 Le vainqueur est : %s",prenom[0]);
      
  printf("\n\n\t \32 Fait une autre partie? o/n :");
  scanf("%s",&cfrm);
}
while(cfrm != 'n');
system("cls");
printf("\n\n\n\n\n\t\t Merci d'avoire utilise ce programme \1 \n\n \32 Appuyer sur une touche pour quitter ... !");
getch();
}
//                                  PROGRAMME réalisé par :BELBSIR SAÂD ;)
