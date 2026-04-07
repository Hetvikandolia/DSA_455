#include<stdio.h>
int fact(int n){
    if(n==1) return 1;
    if(n==2) return 2;
     
    return n*fact(n-1);
}
int main(){
    int n;
    // int fact=0;
    printf("enter n - ");
    scanf("%d",&n);

    int ans=fact(n);

    printf("%d",ans);
    
}