#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
main()
{
      system("title Note supérieur à la moyenne");
      
      int n,note[100],s=0,i;
      double moyenne;
      
      printf("Entrez nombre des notes :");
      scanf("%d",&n);
      
      for(i=1;i<=n;i++)
      {
                       printf("Entrez note %d :",i);
                       scanf("%d",&note[i]);
                       
            while(note[i]<0 || note[i]>20)
            {         printf("\nLa note doit etre entre 0 et 20\nEntrez note %d :",i);
                      scanf("%d",&note[i]);
            }          
                      s += note[i];
      }
      
      moyenne = s / n ;
      
      s=0;
      for(i=1;i<=n;i++)
      {
                       if (note[i] > moyenne)
                          s += 1 ;
      }
      printf("\nLe nombre des notes superiuer a la moyenne est : %d",s);
getch();
}
//                                  PROGRAMME réalisé par : ~ BELBSIR SAÂD ~
