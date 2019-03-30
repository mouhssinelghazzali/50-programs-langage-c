#include <stdio.h>          /******************************************/
#include <conio.h>         /*        Examen Passage 2009 (++)        */
#include <stdlib.h>       /*               Variante 1               */
                         /******************************************/
                        /*         Programme réalisé par :        */
struct joueur          /*              BELBSIR SAÂD              */
{                     /******************************************/
       char prenom[20];
};
main()
{
      system("title Jeux dyal drari ... :p");
      
      int i,k,P1,m,j,s;
      signed int x;
      struct joueur T[100];
      
      printf("\n  - Entrez nombre des joueurs :");
      scanf("%d",&m);
      for(i=0;i<=m-1;i++)
      {printf("\n\t \32Entrez Prenom %d :",i+1);
       scanf("%s",&T[i].prenom);}
P1:   printf("\n - Entrez le Numero qui correspend la personne qui va commencer le jeux :");
      scanf("%d",&P1);
      if(P1>m)
       goto P1;
      P1--;
k:    printf("\n - Entrez K :");
      scanf("%d",&k);
      if(k<=0)
        goto k;

      
      s = P1 ;
      i = 1 ;
      x = -1 ;

      while (m>1)
      {
            if(i==k)
            {
                    for(j=s;j<m;j++)
                      T[j] = T[j+1] ;
              s--;
              m--;
              i=0;
            }
            if(s==(m-1))
             s = x ;
      i+=1;
      s+=1;
      }
      
      printf("\n\20 Le vainqueur est : %s ",T[0].prenom);
      printf("\n\n\n\tDedicace L' :   \32 ZGUIOUAR Youssef\n\t\t\t\32 ELHASSAK Yassine ;)");
getch();
}
//                                    PROGRAMME réalisé par  : BELBSIR SAÂD ;)
