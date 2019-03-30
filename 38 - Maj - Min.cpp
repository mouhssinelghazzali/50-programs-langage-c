#include <conio.h>
#include <stdio.h>
#include <string.h> // concerne strlen
#include <ctype.h> // cette biblio.. concerne toupper et tolower
main()
{
      char chaine[40];
      int i,j;
      
      printf("Veuillez saisir une chaine :");
      gets(chaine);
 
      for(i=0;i<strlen(chaine);i++)
      {
               if (chaine[i] == toupper(chaine[i]))
                   chaine[i] = tolower(chaine[i]);
               else
                   chaine[i] = toupper(chaine[i]);
      }
      
      puts(chaine);
      
getch();
}
//                                   PROGRAMME réalisé par : BELBSIR SAÂD ;)
