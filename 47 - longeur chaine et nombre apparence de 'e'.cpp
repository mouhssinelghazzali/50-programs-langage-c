//exercice:4 examen de passage 2009 th�orique
#include <conio.h>
#include <stdio.h>
#include <string.h>
main()
{
      char chaine[200], *pch;
      int L,ne = 0,i;
      
      printf("Entrez une chaine :");
      gets(chaine);
      
      L = strlen(chaine);
      
      pch = strtok(chaine,"e");
      //m�thode1:
      while (pch != NULL)
      {
            pch = strtok(NULL,"e");
            ne += 1 ;
      }
      //m�thode2:
      /*for(i=0;i<=L;i++)
      { 
          if (chaine[i] == 'e') 
              ne += 1 ;
      }*/
      printf("\n\n - La longeur de la chaine est : %d",L);
      printf("\n\n - Nombre d'existence de la lettre 'e' est : %d",ne);
getch();
}
//                                      PROGRAMME r�alis� par : BELBSIR SA�D ;)
