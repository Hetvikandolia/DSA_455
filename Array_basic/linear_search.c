#include<stdio.h>
int main(){
    int n[5]={10,5,8,2,30};
    int size=sizeof(n)/sizeof(n[0]);
    int k;
    printf("enter which element u want to find - ");
    scanf("%d",&k);
    for (int i = 0; i < size; i++)
    {
        if(n[i]==k){
            printf("element at index %d",i);
            break;
        }
        else{
            printf("not exist !!!");
            break;}
    }
    return 0;
}