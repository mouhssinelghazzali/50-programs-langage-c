#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

main()
{
      system("title Poid Ideal");
      system("color 0E");
      
      int t,choix;
      double PI;
      
s:    printf("\n- C'est quoi votre sexe :\n\n\t\32  1 - Femme (\f)\n\t\32  2 - Homme (\v)\n   \20 ");
      scanf("%d",&choix);
      
      if ( choix < 1 || choix > 2 )
      {   system("cls");   goto s;    } 
      
      printf("\nEntrez votre taille en centimetre :");
      scanf("%d",&t);
      
      if ( choix == 1 )
      PI = t - 100 - ( (t-150) / 2 );
      else
      PI = t - 100 - ( (t-150) / 4 );
      
      printf("\n\n \20 Votre Poid Ideal est : %.2lf",PI);
getch();
}
//                                      Programme réalisé par : BELBSIR SAÂD ;)
