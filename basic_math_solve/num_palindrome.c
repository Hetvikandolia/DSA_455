#include<stdio.h>
int main(){
    int n,t;
    int dul=0;
        printf("enter palindrome num - ");
        scanf("%d",&n);
        int real=n;

        while(n>0){
            t=n%10;
            dul=dul*10+t;
            n=n/10;
        }
        if(real==dul){printf("its palindrome");}
        else{printf("not palindrome");}
}