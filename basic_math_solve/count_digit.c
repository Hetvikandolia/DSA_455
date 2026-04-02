#include<stdio.h>
int main(){
    int n;
    int count=0;
    printf("enter number = ");
    scanf("%d",&n);

     while(n>0){
        
        count=count+1;
        n=n/10;
        
    }
    printf("%d",count);
}

// 1452 = 4 digits