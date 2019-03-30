#include<conio.h>
#include<stdio.h>
main()
{
      int i,j,t[10],s;
      
for(i=1;i<=10;i++)
{
                  printf("tapez un entier :");
                  scanf("%d",&t[i]);
}
printf("Les ayant un carré est : ");
for(i=1;i<=10;i++)
{ s = t[i] * t[i];
  for(j=1;j<=10;j++)
    if(s == t[j])
     printf("%d ,",t[i]);
}
getch();
}
