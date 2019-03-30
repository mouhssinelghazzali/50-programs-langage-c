#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
main()
{
      system("title Palindrome"); // Titre du programme
      
      char chaine1[20],chaine2[20];
      
      printf("Entrez une chaine :");  
      scanf("%s",&chaine1);
      
      strcpy(chaine2,chaine1); // copie 'Chaine1' dans 'Chaine2'
      
      strrev(chaine2); // Inversé la 'Chaine2'
      
      if ( strcmp(chaine1,chaine2) == 0 ) // Comparrer la 'chaine1' et 'chaine2' 
        printf("\n\n \20 Palindrome");
      else
        printf("\n\n \20 Non Palindrome");
      
getch();
}
//                                        Programme réalisé par : Belbsir SAAD
//                                                                Tigheramt SOUFIANE
