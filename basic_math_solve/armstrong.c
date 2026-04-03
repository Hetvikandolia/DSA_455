#include<stdio.h>
int main(){
    int n,t;
    int count=0,dul=1;
    printf("enter number = ");
    scanf("%d",&n);
    int real=n;

    while(n>0){
        t=n%10;
        count=count+1;
        dul=(dul^count)*10+t;
        n=n/10;
    }
    if(dul==real){
    printf("true");}
    else{printf("false");}
}



