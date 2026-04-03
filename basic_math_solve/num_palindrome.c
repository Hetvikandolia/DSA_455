#include<stdio.h>
int main(){
    int n,t;
    int dul=0;
        printf("enter palindrome num - ");
        scanf("%d",&n);
        int real=n; //store krta n bhulti real value 

        while(n>0){
            t=n%10;
            dul=dul*10+t; //update first duplicate
            n=n/10;
        }
        if(real==dul){printf("its palindrome");}
        else{printf("not palindrome");}
}