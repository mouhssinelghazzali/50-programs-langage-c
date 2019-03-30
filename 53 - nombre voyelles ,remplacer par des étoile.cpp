#include <stdio.h>
main()
{
      char mot[30];
      int i,j,nv;
      
      printf(" Entrez une chaine :");
      gets(mot);
      nv = 0;
      for(i=0;mot[i] != '\0';i++)
      if( mot[i] == 'a' || mot[i] == 'e' || mot[i] == 'i' || mot[i] == 'o' || mot[i] == 'u' || mot[i] == 'y' )
      {nv++; mot[i] = '*';}
      
      printf("\n\n Nombre des Voyelles : %d",nv);
      printf("\n\n\n les voyelles remplacer par des etoile : %s",mot);
      
getchar();
}
//                                PROGRAMME réalisé par : BELBSIR SAÂD ;)
/*
 Entrez une chaine : saad
 
 Nombre des Voyelles : 2
 les voyelles remplacer par des etoile : s**d
*/
