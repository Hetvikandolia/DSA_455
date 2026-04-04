#include<stdio.h>
void pn(int a){
    if(a==0) return;


    printf("%d ",a);
    // pn(a-1);
}
int main(){
    int n;
    printf("enter n =");
    scanf("%d" ,&n);
    for (int i = 1; i <= n; i++)
    {
        pn(i);
    }
}