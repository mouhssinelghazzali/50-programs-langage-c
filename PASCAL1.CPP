#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{int n,i,j,t[100][100];
      printf("entrez le degre de pascal:");
      scanf("%d",&n);
      n=n+1;
      
      
      for(i=1;i<=n;i++)
      {                t[i][1]=1;
                       for(j=2;j<=i;j++)
                       {t[i+1][j]=t[i][j-1]+t[i][j];}
                       }
      for(i=1;i<=n;i++)
      {  printf("\n");
                       for(j=1;j<i;j++)
      {                printf("%d ",t[i][j]);}}
      
getch();
}
