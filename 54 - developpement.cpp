#include <conio.h>
#include <stdio.h>

main()
{
      int i,j;
      char mot[20];
      
      printf("Entrez une chaine :");
      gets(mot);
      
      for(i=0;mot[i] != '\0';i++)
      {printf("\n");
        for(j=0;j<=i;j++)
          printf("%c",mot[j]);
      }
      
getch();
}
//                               PROGRAMME réalisé par : BELBSIR SAÂD ;)
/*

d
de
dev
deve
devel
develo
develop
developp
developpe
developpem
developpeme
developpemen
developpement

*/
