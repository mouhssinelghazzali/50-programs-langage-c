#include <conio.h>
#include <stdio.h>
main()
{
      int i,j,n;
      
      printf("Entrez N :");
      scanf("%d",&n);

      int t[n-2];

      for(i=2;i<=n;i++)
      {t[i-2] = i;}

      for(i=0;i<=n-2;i++)
         for(j=2;j<=t[i]-1;j++)
            if(t[i] % j == 0)
                t[i] = 0 ;

      printf("\nLes nombre premier sont : ");
      for(i=0;i<=n-2;i++)
           if(t[i] != 0)
                printf("%d ,",t[i]);

getch();
}
//                         PROGRAMME réalisé par : BELBSIR SAÂD ;)
