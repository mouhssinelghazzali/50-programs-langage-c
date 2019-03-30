#include<stdio.h>
#include<conio.h>

main()
{int n,i,t[100],p,ne;
printf("entrez la valeur de n:");
scanf("%d",&n);
for(i=1;i<=n;i++){
printf("enrez t [%d]:",i);
scanf("%d",&t[i]);}
ne=0;
p=0;
for(i=1;i<=n;i++){
 if(t[i]>0)
 p=p+1;                 
  if(t[i]<0)
 ne=ne+1; }   
 printf("le positif est %d\n",p);
 
    printf("le negatif est %d",ne); 
    getch();
}          
//                         PROGRAMME réalisé par : BOUZIANE YOUSSEF ;)
