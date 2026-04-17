#include<stdio.h>
int main(){
    int n[5]={110,50,3,1,2};
    int size=sizeof(n)/sizeof(n[0]);

    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
           n[i]<<n[j];
        }
        
    }

    for (int i = 0; i < size; i++)
    {
       printf("%d ",n[i]);
    }
    
    
}