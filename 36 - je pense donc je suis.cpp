#include <conio.h>
#include <stdio.h>
#include <string.h>
main()
{
      char mot[20];
      int i,k=1;
      
      printf("Entrez une chaine de caractere :");
      gets(mot);
      
      printf("\nmot 1 :");
      for(i=0;i<strlen(mot);i++)
      { 
      printf("%c",mot[i]);
      
           if(mot[i] == ' ')
           {         k++ ;
                     printf("\nmot %d :",k);
           }
      }
      
      
getch();
}
//                              PROGRAMME réalisé par : BELBSIR SAÂD ;)
