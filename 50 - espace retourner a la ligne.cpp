#include <conio.h>
#include <stdio.h>
#include <string.h>
main()
{
      char mot[20];
      char *pch;  
      int nm=0;
      
      printf("Entrez un mot : ");
      gets(mot);                // Ou scanf("%s",&mot);

      pch = strtok(mot," ");
      
      while(pch != NULL)       
      {nm++;
                printf("\nmot %d : %s",nm,pch);
                pch = strtok(NULL," ");
      }

getch();
}
//                             PROGRAMME r�alis� par : BELBSIR SA�D ;)

/* pch est un pointeur qui va prendre tout les premiers caract�re
   d'un mot jusqu'il trouve un espace.
   pch = strtok(mot,espace);
EXEMPLE :
        mot = je suis un stagiaire
dans ce cas le pointeur 'pch' va prendre "je" apr�s en va afficher
le contenu du pointeur li howa "je" ,apr�s pch */
