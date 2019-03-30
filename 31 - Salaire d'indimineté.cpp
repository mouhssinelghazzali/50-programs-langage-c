#include <stdio.h>

main()
{
      int age,ans;
      double salaire,sind,sup;
      
      printf("Entrez le salaire annuel :");
      scanf("%lf",&salaire);
      printf("Entrez l'age :");
      scanf("%d",&age);
ANS:  printf("Entrez le nombre des année d'anciennete :");
      scanf("%d",&ans);
      
      if (age < 1)
         goto ANS ;
      
      /*      while (ans<1)
      {printf ( "le nombre des annee doit etre superieure a 1 reteppez le nombre des annees :");
      scanf("%d",&ans);}*/
      while ( age<46)
      printf (" l'age doit etre forcemment sup ou egal a 46 retapez l'age :");
      scanf ("%d",&age);
      
      if ( ans >= 1 && ans <= 10 )
           sind = (salaire/2 * ans);
      else
          sind = (salaire * ans);
          
      if ( age >= 46 && age<=49 )
         sup = salaire * 2 ;
      else
         sup = salaire * 3 ;
         
      printf("\n\20 Le salaire d'indiminete est : %.2lf",sind + sup );
getchar();
}
