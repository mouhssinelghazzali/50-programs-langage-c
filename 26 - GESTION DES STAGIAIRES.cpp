                         /*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
#include <stdio.h>      /*@                GESTION DES STAGIAIRES               @*/
#include <stdlib.h>    /*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
#include <ctype.h>     /*@         Programme Réalisé par : BELBSIR SAÂD        @*/
#include <string.h>    /*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
#include <time.h>
#define titre "\t\t\tGestion des Stagiaires"

/*@@@@@@@@@@@@@@@@@ Enregistrement  -Absence & Stagiaire- @@@@@@@@@@@@@@@@@*/
struct Absence
{
       int duree;
       char justif[3];
       char raison[40];
       char date[10];
};
struct Stagiaire
{
       int  age;
       char mat[10];
       char nom[20];
       char prenom[20];
       char adress[20];
       struct Absence A[100];
};
/*@@@@@@@@@@@@@@@@@ Variables Global @@@@@@@@@@@@@@@@@*/

      FILE *fichier;
      struct Stagiaire p,T[500];
      int i,j,choix,n=0,f=0;
      char cfrm,chaine[30];
      bool b,save=true;
      clock_t wait;
      time_t start,end;

/*@@@@@@@@@@@@@@@@@ REMPLIRE LISTE STAGIAIRE @@@@@@@@@@@@@@@@@*/
void remplir()
{
        system("cls");
        puts("\n\n \32 REMPLISAGE LA LISTE DES STAGIAIRES :\n");
        save = false ;
     
     printf("Entrez nombre des stagiaires : ");
     scanf("%d",&n);
     
     for(i=f;i<=n+f;i++)
     {     printf("\n \20 Stagiaire %d :\n",i);
mat1:                 printf(" - Entrez Matricule : ");
                      scanf("%s",&T[i].mat);        for(j=1;j<i;j++){ if(strcmp(T[i].mat,T[j].mat) == 0) {printf("\n\n\t Ce Matricule est deja utiliser !!!\n\n"); goto mat1;}}
                      printf(" - Entrez Nom : ");
                      scanf("%s",&T[i].nom);        for(j=0;j < strlen(T[i].nom);j++) T[i].nom[j] = toupper(T[i].nom[j]);
                      printf(" - Entrez Prenom : ");
                      scanf("%s",&T[i].prenom);     toupper(T[i].prenom[0]); for(j=1;j<strlen(T[i].prenom);j++) T[i].prenom[j] = tolower(T[i].prenom[j]);
                      printf(" - Entrez Age : ");
                      scanf("%d",&T[i].age);
                      printf(" - Entrez Adresse : ");
                      scanf("%s",&T[i].adress);
     }
}
/*@@@@@@@@@@@@@@@@@ AJOUT STAGIAIRE @@@@@@@@@@@@@@@@@*/
void ajout()
{
ajt:    system("cls");
        puts("\n\n \32 AJOUT D'UN STAGIAIRE :\n");
        save = false ;
        
     printf("Continue l'ajout? o/n : ");
     scanf("%s",&cfrm);
     if(cfrm == 'o')
     {      n = n+f+1;
mat2:                 printf(" - Entrez Matricule : ");
                      scanf("%s",&T[n].mat);        for(i=1;i<=n-1;i++){ if(strcmp(T[i].mat,T[n].mat) == 0) {printf("\n\n\t Ce Matricule est deja utiliser !!!\n\n"); goto mat2;}}
                      printf(" - Entrez Nom : ");
                      scanf("%s",&T[n].nom);        for(i=0;i<strlen(T[n].nom);i++) T[n].nom[i] = toupper(T[n].nom[i]);
                      printf(" - Entrez Prenom : ");
                      scanf("%s",&T[n].prenom);     toupper(T[n].prenom[0]); for(i=1;i<strlen(T[n].prenom);i++) T[n].prenom[i] = tolower(T[n].prenom[i]);
                      printf(" - Entrez Age : ");
                      scanf("%d",&T[n].age);
                      printf(" - Entrez Adresse : ");
                      scanf("%s",&T[n].adress);
     }
     printf("\n \20 Autre Ajout? o/n : ");
     scanf("%s",&cfrm);
        if(cfrm == 'o')
           goto ajt ;
}
/*@@@@@@@@@@@@@@@@@ RECHERCHE STAGIAIRE @@@@@@@@@@@@@@@@@*/
void recherche()
{
rech:   system("cls");
        puts("\n\n \32 RECHERCHE D'UN STAGIAIRE :\n");
        save = false ;
     
rech1:  printf(" \20 Recherche par :  \32 1 - Matricule\n\t\t\32 2 - Nom\n\t\t\32 3 - Annuler\n");
        printf("Entrez votre choix : ");
        scanf("%d",&choix);
     
     switch (choix)
     {
            case 1 :
                 printf("\n \20 Entrez Matricule [Rchr] : ");
                 scanf("%s",&chaine);                   for(i=0;i<strlen(chaine);i++) chaine[i] = toupper(chaine[i]);
                 b = false ;
                 for(i=1;i<=n+f;i++)
                 {
                                  if ( strcmp(T[i].mat,chaine) == 0 )
                                  {
                                       b = true ;
                                       printf("\n\n\t \32 Stagiaire EXISTE\n\n \32 Afficher les donnees de ce stagiaire? o/n : ");
                                       scanf("%s",&cfrm);
                                       if (cfrm == 'o')
                                       {
                                            printf("\n\20 Numero du stagiaire %s dans la liste est : %d\n",T[i].nom,i);
                                                printf("Matricule   : %s\n",T[i].mat);
                                                printf(" Nom        : %s\n",T[i].nom);
                                                printf("  Prenom    : %s\n",T[i].prenom);
                                                printf("   Age      : %d\n",T[i].age);
                                                printf("    Adresse : %s\n",T[i].adress);
                                       }
                                       break;
                                  }
                 }
                 if ( b == false )
                      printf("\n\n\tN'EXISTE pas ce STAGIAIRE\n");
                 break;
            case 2 :
                 printf("\n \20 Entrez Nom [Rechr] : ");
                 scanf("%s",&chaine);          for(i=0;i<strlen(chaine);i++) chaine[i] = toupper(chaine[i]);
                 b = false ;
                 for(i=1;i<=n+f;i++)
                 {
                                  if (strcmp(chaine,T[i].nom) == 0)
                                  {
                                       b = true ;
                                       printf("\n\n\t \32 %s EXISTE dans la liste.\n\n \32 Afficher les donnees de ce stagiaire? o/n : ",chaine);
                                       scanf("%s",&cfrm);
                                       if (cfrm == 'o')
                                       {
                                            printf("\n\n\20 Numero du stagiaire %s dans la liste est : %d\n",T[i].nom,i);
                                                printf("Matricule   : %s\n",T[i].mat);
                                                printf(" Nom        : %s\n",T[i].nom);
                                                printf("  Prenom    : %s\n",T[i].prenom);
                                                printf("   Age      : %d\n",T[i].age);
                                                printf("    Adresse : %s\n",T[i].adress);
                                       }
                                  }
                 }
                 if ( b == false )
                      printf("\n\n\tN'EXISTE pas ce STAGIAIRE\n");
                 break;
            case 3 :
                 break ;
            default :
                    printf("\n\n\t\32Entrez une valeur de ( 1 a 3 )!!!\n ");
                    goto rech1 ;
                    break ;
     }
     printf("\n\20 Autre recherche? o/n : ");
     scanf("%s",&cfrm);
         if(cfrm == 'o')
            goto rech ;
}
/*@@@@@@@@@@@@@@@@@ AFFICHER STAGIAIRE @@@@@@@@@@@@@@@@@*/
void afficher()
{
        system("cls");
        puts("\n\n \32 AFFICHAGE DES STAGIAIRE :\n");
        
afch:   printf("\n\20Afficher :     \32 1 - Stagiaire par Stagiaire\n\t\t\32 2 - Sous forme une LISTE\n\t\t\32 3 - Annuler\n\20 Entrez votre choix : ");
        scanf("%d",&choix);
        
        switch (choix)
        {
               case 1 :
                    for(i=1;i<=n+f;i++)
                    {
                          if(i%2==0)
                          {   printf("\n\t \20 Stagiaire %d :\n",i);
                                  printf("\tMatricule   : %s\n",T[i].mat);
                                  printf("\t Nom        : %s\n",T[i].nom);
                                  printf("\t  Prenom    : %s\n",T[i].prenom);
                                  printf("\t   Age      : %d\n",T[i].age);
                                  printf("\t    Adresse : %s\n",T[i].adress);
                          }
                          else
                          {   printf("\n\t \20 Stagiaire %d :\n",i);
                                  printf("\tMatricule   : %s\n",T[i].mat);
                                  printf("\t Nom        : %s\n",T[i].nom);
                                  printf("\t  Prenom    : %s\n",T[i].prenom);
                                  printf("\t   Age      : %d\n",T[i].age);
                                  printf("\t    Adresse : %s\n",T[i].adress);
                          }
                    }
                    break;
               case 2 :
                    printf("\n\n Matricule\tNom\tPrenom\tAge\tAdresse\n");
                    
                    for(i=1;i<=n;i++)
                     printf(" %s\t%s\t%s\t%d\t%s\n",T[i].mat,T[i].nom,T[i].prenom,T[i].age,T[i].adress);
                     
                    break;
               case 3 :
                    break;
               default :
                       printf("\n\n\tEntrez la valeur ( 1 - 2 ou 3 ) !!!");
                       goto afch ;
                       break;
        }
}
/*@@@@@@@@@@@@@@@@@ SUPPRESSION STAGIAIRE @@@@@@@@@@@@@@@@@*/
void suppression()
{
sup:     system("cls");
         puts("\n\n \32 SUPPRESSION D'UN STAGIAIRE :\n");
        save = false ;
         
         printf("\20 Entrez Matricule [sup] : ");
         scanf("%s",&chaine);
         
         b = false ;
         for(i=1;i<=n+f;i++)
         {
                          if ( strcmp(T[i].mat,chaine) == 0 )
                          {
                               b = true ;
                               
                               printf("\n \32 Continue la suppression? o/n : ");
                               scanf("%s",&cfrm);
                               if ( cfrm == 'o' )
                               {
                                    for(j=i;j<=(n+f)-1;j++)
                                       T[j] = T[j+1] ;
                                    n -= 1;
                                    break;
                               }
                               else
                                 break;
                          }
         }
         if ( b == false )
           printf("\n\n\tN'EXISTE pas ce STAGIAIRE !!!\n");
     
         printf("\n \20 Autre Suppression? o/n : ");
         scanf("%s",&cfrm);
         if ( cfrm == 'o' )
          goto sup ;
}
/*@@@@@@@@@@@@@@@@@ MODIFIER STAGIAIRE @@@@@@@@@@@@@@@@@*/
void modifier()
{
modf:    system("cls");
         puts("\n\n \32 MODIFICATION D'UN STAGIAIRE :\n");
        save = false ;
         
         printf(" \20 Entrez Matricule [Modf] : ");
         scanf("%s",&chaine);
         
         printf("\n\n\t\20 Modifier :\32 1 - Nom\n\t\t\32 2 - Prenom\n\t\t\32 3 - Age\n\t\t\32 4 - Adresse\n\t\t\32 5 - Tout les donnees du stagiaire\n\t\t\32 6 - Annule modification\n\t\20 ");
         printf("Entrez votre choix : ");
         scanf("%d",&choix);
         
         if ( choix == 1 ||  choix == 2 ||  choix == 3 ||  choix == 4 ||  choix == 5 )
         {  
              b = false ;
              for(i=1;i<=n+f;i++)
              {
                               if(strcmp(T[i].mat,chaine) == 0)
                               {
                                             b = true ;
                                    printf("\n\n\32 Continue la modification? o/n : ");
                                    scanf("%s",&cfrm);
                                    if ( cfrm == 'o' )
                                    {
                                         switch (choix)
                                         {
                                                case 1 :
                                                     printf("\n\20Entrez le nouveau Nom : ");
                                                     scanf("%s",&T[i].nom);
                                                     printf("\n\n\t\32 Modification du nom est terminer.\n");
                                                     break;
                                                case 2 :
                                                     printf("\n\20Entrez le nouveau prenom : ");
                                                     scanf("%s",&T[i].prenom);
                                                     printf("\n\n\t\32 Modification du prenom est terminer.\n");
                                                     break;
                                                case 3 :
                                                     printf("\n\20Entrez le nouveau age : ");
                                                     scanf("%d",&T[i].age);
                                                     printf("\n\n\t\32 Modification d'age est terminer.\n");
                                                     break;
                                                case 4 :
                                                     printf("\n\20Entrez la nouvelle adreesse : ");
                                                     scanf("%s",&T[i].adress);
                                                     printf("\n\n\t\32 Modification d'adresse est terminer.\n");
                                                     break;
                                                case 5 :
                                                     printf("\n Entrez le nouveau nom : ");
                                                     scanf("%s",&T[i].nom);
                                                     printf(" Entrez le nouveau prenom : ");
                                                     scanf("%s",&T[i].prenom);
                                                     printf(" Entrez le nouveau age : ");
                                                     scanf("%d",&T[i].age);
                                                     printf(" Entrez la nouvelle adresse : ");
                                                     scanf("%s",&T[i].adress);
                                                     printf("\n\n\t\32 Modification terminer.\n");
                                                     break;
                                                case 6 :
                                                     printf("\n\n\t \32 Modification est annuler.\n");
                                                     break;
                                                default :
                                                        printf("\n\n\t\20 N'EXISTE pas cette valeur dans les choix !!!");
                                                        break ;
                                         }
                                    }
                                    else
                                       printf("\n\n\t \32 Modification est annuler.\n");
                               // sortir de la boucle For.
                               break;
                               }
              }
         }
         else
           printf("\n\n\t \32 Modification est annuler.\n");

         printf("\n\n \20 Autre modification? o/n : ");
         scanf("%s",&cfrm);
           if ( cfrm == 'o' )
              goto modf ;
}
/*@@@@@@@@@@@@@@@@@ TRIE LISTE STAGIAIRE @@@@@@@@@@@@@@@@@*/
void tri()
{
tri:      system("cls");
          puts("\n\n \32 TRIE LA LISTE DES STAGIAIRES :\n");
          save = false ;
          
          printf("\n \20 Tri en ordre : \32 1 - Croissant\n\t\t\32 2 - Decroissant\n\t\t\32 3 - Annuler\
              \n\20 Entrez votre choix : ");
          scanf("%d",&choix);
      
      switch (choix)
      {
             case 1 :       
tri1:             printf("\n \20 Tri par : \32 1 - Matricule\n\t\t\32 2 - Nom\n\t\t\32 3 - Retour\n\20 Entrez votre choix : ");
                  scanf("%d",&choix);

                             switch (choix)
                             {
                                    case 1 ://Tri Bull
                                         for(i=1;i<=n+f;i++)
                                         {   for(j=1;j<=(n+f)-(i+1);j++)
                                             {   if (strcmp(T[j].mat,T[j+1].mat) == 1)
                                                 {  p = T[j] ;   T[j] = T[j+1] ;  T[j+1] = p ; }
                                             }
                                         }
                                         printf("\n\n\t \32 Le Tri par matricule en mode croissant est terminer.\n\n");
                                         break ;
                                    case 2 ://Tri Selection
                                         for(i=1;i<=(n+f);i++)
                                         {   for(j=i+1;j<=(n+f);j++)
                                             {    if (strcmp(T[i].nom,T[j].nom) == 1)
                                                  {  p = T[i] ;   T[i] = T[j] ;  T[j] = p ; }
                                             }
                                         }
                                         printf("\n\n\t \32 Le tri par nom en mode croissant est terminer.\n\n");
                                         break ;
                                    case 3 :
                                         goto tri ;
                                         break ;
                                    default :
                                            printf("\n\n\t N'existe pas cette valeur dans les choix !!!!");
                                            goto tri1 ;
                                            break;
                             }
             case 2 :
tri2:             printf("\n \20 Tri par : \32 1 - Matricule\n\t\t\32 2 - Nom\n\t\t\32 3 - Retour\n\20 Entrez votre choix : ");
                  scanf("%d",&choix);

                             switch (choix)
                             {
                                    case 1 ://Tri Bull
                                         for(i=1;i<=n+f;i++)
                                         {   for(j=1;j<=(n+f)-(i+1);j++)
                                             {   if (strcmp(T[j].mat,T[j+1].mat) == -1)
                                                 {  p = T[j] ;   T[j] = T[j+1] ;  T[j+1] = p ; }
                                             }
                                         }
                                         printf("\n\n\t \32 Le Tri par matricule en mode decroissant est terminer.\n\n");
                                         break ;
                                    case 2 ://Tri Selection
                                         for(i=1;i<=(n+f);i++)
                                         {   for(j=i+1;j<=(n+f);j++)
                                             {    if (strcmp(T[i].nom,T[j].nom) == -1)
                                                  {  p = T[i] ;   T[i] = T[j] ;  T[j] = p ; }
                                             }
                                         }
                                         printf("\n\n\t \32 Le tri par nom en mode decroissant est terminer.\n\n");
                                         break ;
                                    case 3 :
                                         goto tri ;
                                         break ;
                                    default :
                                            printf("\n\n\t N'existe pas cette valeur dans les choix !!!!");
                                            goto tri2 ;
                                            break;
                             }
             case 3 :
                  printf("\n\n\t \32 Le tri est annuler.\n\n");
                  break ;
             default :
                     printf("\n\n\t N'existe pas cette valeur dans les choix !!!!\n\n");
                     goto tri ;
                     break ;
      }
      
      printf("\n \20 fait un autre tri? o/n : ");
      scanf("%s",&cfrm);
        if(cfrm == 'o')
           goto tri ;
}
/*@@@@@@@@@@@@@@@@@ INSERTION STAGIAIRE @@@@@@@@@@@@@@@@@*/
void insert()
{
ins:   system("cls");
       puts("\n\n \32 INSERTION D'UN STAGIAIRE :\n");
       save = false ;
       
       printf("\n Entrez Matricule : ");
       scanf("%s",&chaine);
       printf(" Entrez position : ");
       scanf("%d",&choix);
       
       printf("\n\n\t \32 Continue l'insertion du stagiaire :");
       scanf("%s",&cfrm);
       if (cfrm == 'o')
       {
                for(i=(n+f);i>=choix;i--)
                {  T[i+1] = T[i] ; }
            printf("\nEntrez Matricule : ");
            scanf("%s",&T[choix].mat);
            printf("Entrez Nom : ");
            scanf("%s",&T[choix].nom);
            printf("Entrez Prenom : ");
            scanf("%s",&T[choix].prenom);
            printf("Entrez Age : ");
            scanf("%d",&T[choix].age);
            printf("Entrez Adresse : ");
            scanf("%s",&T[choix].adress);
         printf("\n\n\t\20l'insertion du stagiaire %s est effectuer.\n");
       }
       printf("\n\n\20 Inserer un autre stagiaire? o/n : ");
       scanf("%s",&cfrm);
        if (cfrm == 'o')
          goto ins ;
}
/*@@@@@@@@@@@@@@@@@ FILTRE LISTE STAGIAIRE @@@@@@@@@@@@@@@@@*/
void filtre()
{
fil:     system("cls");
         puts("\n\n \32 FILTRE LA LISTES DES STAGIAIRES :\n");
         
         printf("\n\20 Filtre par : \32 1 - Nom\n\t\t\32 2 - Prenom\n\t\t\32 3 - Annuler\n - Entrez votre choix : ");
         scanf("%d",&choix);
    switch (choix)
    {
           case 1 :
                printf("\nEntrez Nom : ");
                scanf("%s",&chaine);
                printf("\n\n Matricule\t Nom\n Prenom\t Age\t Adresse\n");
                for(i=1;i<=(n+f);i++)
                {  choix = 0 ;
                   for(j=0;j<strlen(chaine);j++)
                   {    if (T[i].nom[j] == chaine[j])
                        {   choix += 1 ;  }
                   }
                  if ( strlen(chaine) == choix )
                     printf(" %s\t %s\t %s\t %d\t%s\n",T[i].mat,T[i].nom,T[i].prenom,T[i].age,T[i].adress);
                }
                break ;
           case 2 :
                printf("\nEntrez Prenom : ");
                scanf("%s",&chaine);
                printf("\n\n Matricule\t Nom\t Prenom\t Age\t Adresse\n");
                for(i=1;i<=(n+f);i++)
                {  choix = 0 ;
                   for(j=0;j<strlen(chaine);j++)
                   {    if(T[i].prenom[j] == chaine[j])
                        {   choix += 1 ;  }
                   }
                  if ( strlen(chaine) == choix )
                     printf(" %s\t %s\t %s\t %d\t %s\n",T[i].mat,T[i].nom,T[i].prenom,T[i].age,T[i].adress);
                }
           case 3 :
                printf("\n\n\tLe filtre est annuler.\n");
                break ;
           default :
                   printf("\n\n\t N'existe pas cette valeur dans les choix !!!\n\n");
                   goto fil ;
                   break ;
    }
                   
              printf("\n\n \20 fait un autre filtre? o/n : ");
               scanf("%s",&cfrm);
              if(cfrm == 'o')
               goto fil ;
}
/*@@@@@@@@@@@@@@@@@ ECRIRE DANS LE FICHIER @@@@@@@@@@@@@@@@@*/
void ecrire()
{
     fichier = fopen("C:\\Users\\saad\\Desktop\\GESTION_DES_STAGIAIRES.txt","w");

     if ( fichier != NULL )
     {
          for ( i=1 ; i <= n+f ; i++ )
              fprintf(fichier,"%s\n%s\n%s\n%d\n%s",T[i].mat,T[i].nom,T[i].prenom,T[i].age,T[i].adress);
                      save = true ;
          printf("\n\n    \20 Les donnees de la liste est enregistrer dans le fichier\n\n     \"C:\\Users\\saad\\Desktop\\GESTION_DES_STAGIAIRES.txt\"  avec succes \1");
     }
     else
          printf("\n\n   \20 ERREUR d'enregistrement des donnees dans le fichier !!!");
          
     fclose(fichier);
}
/*@@@@@@@@@@@@@@@@@ LIRE LE FICHIER @@@@@@@@@@@@@@@@@*/
void lire()
{
     fichier = fopen("C:\\Users\\saad\\Desktop\\GESTION_DES_STAGIAIRES.txt","r");
     
     if (fichier != NULL)
     {
                 while (!feof(fichier))
                 {
                       f += 1 ;
                                              fscanf(fichier,"%s%s%s%d%s",&T[f].mat,&T[f].nom,&T[f].prenom,&T[f].age,&T[f].adress);
                 }
     }
     else
        printf("\n\n\n\t\t\20 ERREUR d'enregistrer les donnees du fichier dans la\n\t\t\t\tliste des stagiaire !!!\n\n");

     fclose(fichier);
}
/*@@@@@@@@@@@@@@@@@ SUPPRESSION DU FICHIER @@@@@@@@@@@@@@@@@*/
void supfich()
{
       system("cls");
       puts("\n\n \32 SUPPRESSION DU FICHIER :\n");
       
       printf("\t- Si vous supprimer le fichier vous perdre tous les donnees\n\t qui concerner les stagiaires !\n\n");
       printf("\20 Voulez vous supprimer definitivement le fichier? o/n : ");
       scanf("%s",&cfrm);
       
       if (cfrm == 'o')
       {
                remove("C:\\Users\\saad\\Desktop\\GESTION_DES_STAGIAIRES.txt");
                printf("\n\n\tLe fichier est supprimer.\n\n");
       }
       else
        printf("\n\n\tLa suppression du fichier est annuler.\n\n");
}
                 /*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
                /*@@@@@@@@@@@@                     MAIN ()                       @@@@@@@@@@@@*/
               /*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
main()
{
// Introduction :      
      time(&start);
      system("title Gestion des Stagiaires");
      system("color F0");
      puts("\t\t\t\t Bonjour \1 !\n\n\t\t\t> GESTION DES STAGIAIRES <\n\n\t\20 Ce programme permet de : \32 Ajouter un stagiaire.\n\t\t\t\t   \32 Afficher la liste des stagiaires.\n\t\t\t\t   \32 Rechercher un stagiaire.\n\t\t\t\t   \32 Supprimer un stagiaire.\n\t\t\t\t   \32 Trie la liste des stagiaire.\n\t\t\t\t   \32 Filtrer la liste des stagiaires.\n\t\t\t\t   \32 Modifier les donnees d'un stagiaire.\n\t\t\t\t   \32 Inserer un stagiaire.\n\t\t\t\t   \32 Sauvegarder les donnees dans un fichier.\n\n\n\t\t    \20 J'espere que vous aimez ce programme \2\n\n\t\32 Appuyer sur ENTRER pour passer au programme \23\23\n\n\n\n\n\t\t\20 Ce programme est realise par : BELBSIR SAAD");
      getchar() ;
// Programme :
          system("color 70");
debut:    system("cls");
          puts(titre);
      lire();   // Ouverture du fichier en Mode Lecture.
        
      printf("\n \20 Menu :\n\t\t\32 1  - Remlire la liste.\n\t\t\32 2  - Ajout stagiaire.\n\t\t\32 3  - Afficher la liste.\n\t\t\32 4  - Recherche d'un stagiaire\n\t\t\32 5  - Suppression d'un stagiaire\n\t\t\32 6  - Modifier les donnees d'un stagiaire\n\t\t\32 7  - Insertion d'un stagiaire\n\t\t\32 8  - Trie la liste des stagiaires\n\t\t\32 9  - Filtrer la liste des stagiaires\n\t\t\32 10 - Enregistrer les donnees dans le fichier\n\t\t\32 11 - Supprimer le fichier\n\t\t\32 12 - Quitter l'application\n\n - Entrez votrez choix : ");
      scanf("%d",&choix);
      
   switch (choix)
   {
          case 1 :
               remplir();
               break;
          case 2 :
               ajout();
               break;
          case 3 :
               afficher();
               break;
          case 4 :
               recherche();
               break;
          case 5 :
               suppression();               
               break;
          case 6 :
               modifier();
               break;
          case 7 :
               insert();
               break;
          case 8 :
               tri();
               break;
          case 9 :
               filtre();
               break;
          case 10 :
               ecrire();
               break;
          case 11 :
               supfich();
               break;
          case 12 :
               goto fin ;
               break;
          default :
                  goto debut ;
                  break;
   }
                  
                  printf("\n\n\t\20 Retour au Menu? o/n : ");
                  scanf("%s",&cfrm);
                    if (cfrm == 'o')
                      goto debut ;
fin:
    
                      if(save == false)
                      {   system("cls");
enrg:                      printf("\n\n\n\t - Voulez vous enregistrer les modification\n\t  de C:\\Users\\saad\\Desktop\\GESTION_DES_STAGIAIRES.txt ?\n\n\t\t \32 1 - Enregistrer\n\t\t \32 2 - Non enregistrer \n\t\20 Entrez votre choix : ");
                           scanf("%d",&choix);
                               if (choix == 1)
                                 ecrire();
                               else if (choix == 2)
                                 {}
                               else
                                 goto enrg ;
                      }
      
getchar();
}
