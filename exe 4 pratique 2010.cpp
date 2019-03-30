#include <conio.h>
#include <stdio.h>
main()
{
      int f=20,i,k=1,j,nb;
      nb=8;
      printf("\n\n");
      for(i=1;i<=9;i++)
      {  for(j=f;j>=1;j--)
           printf(" ");
      if(i==1)
        printf("%d * %d + %d = %d",i,nb,i,i*nb+i);
      else
      {k=(k*10)+i;
      printf("%d * %d + %d = %d",k,nb,i,k*nb+i);
      }
      printf("\n");
      f--;
      }

getch();
}
//        Devloppement
