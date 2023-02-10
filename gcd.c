#include<stdio.h>
int main(){
    int a,b,r,m;
    scanf("%d %d",&a,&b);
    m = (a>b)? b : a ;
    for(int i=1;i<=m;i++){
        if(a%i==0 && b%i==0){
           r = i;
        }
    }
    printf("%d",r);

    return  0 ;
}