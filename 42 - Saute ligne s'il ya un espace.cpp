#include <conio.h>
#include <stdio.h>
#include <string.h>
main()
{//                     a chaque espace en saute la ligne.
      char chaine[40],*pch;
      int i=1;
      
      printf("Entrez une chaine de caractere : ");
      gets(chaine);
      
      pch = strtok(chaine," ");

      while (pch != NULL)
      {
            printf("mot%d : %s\n",i++,pch);
            pch = strtok(NULL," ");
      }
      
getch();
}
//                   PROGRAMME réalisé par : BELBSIR SAÂD ;)
