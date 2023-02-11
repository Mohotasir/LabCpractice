
#include<stdio.h>
int main(){
      int i,j,k,n,s;
     scanf("%d",&n);
    //upside
     for(int u =2;u<n/2;u++){
          for(int s = n/2 ; s >= u ; s--){
            printf(" ");
         }

         for(int v = 1;v<=u;v++){

            printf("* ");

         }
         for(int s = n/2 ; s >= u ; s--){
            printf(" ");
         }

         for(int v = 1;v<=u;v++){

            printf("* ");

         }
         printf("\n");
     }


    //downside
    for(i=1;i<=n;i++){
            for(k=1;k<=i;k++){
            printf(" ");
        }
        for(j=n;j>i;j--){
            printf("* ");
        }


        printf("\n");
    }



    return 0;
}

