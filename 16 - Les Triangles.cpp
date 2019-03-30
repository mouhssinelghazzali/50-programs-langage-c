#include <conio.h>       /**************************************/
#include <stdio.h>      /*    Programme,C++ - Les Triangle    */
#include <stdlib.h>    /**************************************/
main()
{
      system("title Les Triangles");
      
      int i,j,n,ne;
      
      printf("\n \20 Entrez nombre des lignes :");
      scanf("%d",&n);
      
      for(i=1;i<=n;i++)    // *
      {printf("\n");       // * *
       for(j=1;j<=i;j++)   // * * *
        printf("*");}      // * * * *
      
      printf("\n");
      
      for(i=1;i<=n;i++)    //           *
      {printf("\n");       //         * *
       for(j=n;j>=i;j--)   //       * * *
        printf(" ");       //     * * * *
       for(j=1;j<=i;j++)   //   * * * * *
        printf("*");}      // * * * * * *
      
      printf("\n");
      
      for(i=1;i<=2*n;i+=2)  //           *
      { printf("\n");       //         * * *
       for(j=2*n;j>=i;j-=2) //       * * * * *
        printf(" ");        //     * * * * * * *
       for(j=1;j<=i;j++)    //   * * * * * * * * *
        printf("*");}       // * * * * * * * * * * *
      
       printf("\n");
       
       for(i=1;i<=n;i++)   // * * * *
       {printf("\n");      // * * *
        for(j=n;j>=i;j--)  // * *
          printf("*");}    // *
          
       printf("\n");
       
       for(i=1;i<=n;i++)   //  * * * * * *
       {printf("\n");      //    * * * * *
        for(j=1;j<=i;j++)  //      * * * *
         printf(" ");      //        * * *
        for(j=n;j>=i;j--)  //          * *
         printf("*");}     //            *
          
      printf("\n");
      ne = n ;
      for(i=1;i<=n;i++)     //  * * * * * * * * * * *
      {printf("\n");        //    * * * * * * * * *
       for(j=1;j<=i;j++)    //      * * * * * * *
        printf(" ");        //        * * * * *
       for(j=2;j<=2*ne;j++) //          * * *
        printf("*");ne--;}  //            *
getch();
}
//                               Programme réalisé par :BELBSIR SAÂD ;)
