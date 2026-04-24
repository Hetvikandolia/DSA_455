#include<stdio.h>
int main(){
    int n[5]={10,5,8,2,30};
    int size=sizeof(n)/sizeof(n[0]);

    int k;
    printf("enter kth position-");
    scanf("%d",&k);
    int j=n[0];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < j-1; j++)
        {
            n[j]=n[j+1];
        
        }
    n[size-1]=j;        
        
    }
    printf("valid seq.");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",n[i]);
    }
    
    // printf("%d",j);
    
}