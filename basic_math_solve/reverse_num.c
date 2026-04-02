#include<stdio.h>
int main(){
    int n,t,num=0;
    // int count=0;
    printf("enter number = ");
    scanf("%d",&n);

    while(n>0){
       t=n%10; 
       n=n/10;
        num=(num*10)+t;
    }
    printf("%d",num);
}