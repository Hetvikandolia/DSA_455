#include<stdio.h>
int main(){
    int n[6]={10,2,5,8,30};
    int size=sizeof(n)/sizeof(n[0]);

    int max=n[0];
    for (int i = 0; i < size; i++)
    {
        
       if(n[i]>max){max=n[i];}
    }

    printf("the largest element - %d",max);
    
}