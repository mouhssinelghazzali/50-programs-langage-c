#include <conio.h>
#include <stdio.h>
main()
{
int n,i,j,x,drp=0;
// la taille de tableau
printf("entrer la taille du tableau : \n ");
scanf("%d",&n);
// declaration de tableau avec la taille n ,et la variable s pour le trie ( faire la permutation )
int t[n],s;
// boucle (for) pour la remplissage du tableau
printf("entrer les elements du tableau : \n ");// \n pour sauter une ligne
for(i=0;i<n;i++)// i<n ou i<=n-1
scanf("%d",&t[i]);
//deux boucle imbriqué =(boucle wasst boucle) pout trier le tableau
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(t[i]>t[j])
{
s=t[i];
t[i]=t[j];
t[j]=s;
}
}
}
// l'affichage du tableau avant l'insertion et aprés le trie
for(i=0;i<n;i++)
{
printf("%d ",t[i]);
}
//demande a l'utilisateur d' entrer le nombre a inserer
printf("\n entrer le nombre a inserer : \n ");
scanf("%d",&x);
//l'insertion
for(i=0;i<n;i++)
{
if(t[i]>=x && drp==0)
{
drp=1;
for(j=n;j>i;j--)
{
t[j]=t[j-1];
if(j==i+1)
t[j-1]=x;
}
}
}
printf("\n");
// boucle pour l'affichage
for(i=0;i<=n;i++)
printf("%d ",t[i]);


getch();
}
//            Devloppement
