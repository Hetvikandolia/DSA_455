#include<stdio.h>
#include<math.h>
int main(){
    int n,t;
    int count=0,dul=0;
    printf("enter number = ");
    scanf("%d",&n);
    int real=n;

    while(n>0){
        // count=count+1;
        count++;
        n=n/10;
    }
    n=real;

    while(n>0){
        t=n%10;
        dul=dul+pow(t,count);
        n=n/10;
    }
    if(dul==real) {printf("true");}
    else {printf("false");}
}



