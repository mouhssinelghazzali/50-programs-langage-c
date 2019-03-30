#include <conio.h>        /************************************************/
#include <stdio.h>       /*  Programme C++ - Suite (fonction Récursive)  */
#include <stdlib.h>     /************************************************/
int suite(int n)
{
    if(n == 1 || n == 2 )    
    return(1);
    else    
    {return((5*suite(n-2))+(3*suite(n-1)));}
    
}
main()
{
      system("title Suite (fonction Récursive)");
      
      int n;
      
      printf("Entrez N :");
      scanf("%d",&n);
      
      printf("\n\n \20 U = %d ",suite(n));
getch();
}
//                                                Programme réalisé par : BELBSIR SAÂD ;)
