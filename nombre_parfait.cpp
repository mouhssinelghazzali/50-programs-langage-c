#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{int k=1,s=0,n,i,j=1,t[100];

printf("\ntapez un entier positif:");
scanf("%d",&n);
for(i=1;i<n;i++)
{if(n%i==0)
{t[j]=i;
j++;
k++;}
}

for(j=1;j<k;j++)
{s=s+t[j];}


if(s==n)
{printf("%d est un nombre parfait puisque:%d=",n,s);
for(j=1;j<k;j++)
{printf("%d+",t[j]);}}
if(s!=n)
{printf("%d ce n'est pas un nombre parfait puisque:%d!=",n,n);
for(j=1;j<k;j++)
{
 if(j==k-1)
 printf("%d",t[j]);
// else
// printf("%d+",t[j]);
}}
getch();
}
