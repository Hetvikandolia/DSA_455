#include<stdio.h>
int pn(int a){
    if(a==0) return 0;
    
    return a+pn(a-1);
    // printf("%d ",a);
    // pn(a-1);
}
int main(){
    int n;
    // int sum=0;
    printf("enter n =");
    scanf("%d" ,&n);
   
    int sum=pn(n);
    printf("sum %d",sum);
}