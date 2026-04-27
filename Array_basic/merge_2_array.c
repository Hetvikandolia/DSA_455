#include<stdio.h>
int main(){
    int n[5]={10,5,8,2,30};
    int size1=sizeof(n)/sizeof(n[0]);

    int m[5];
    // ={10,55,88,22,30};
    // int size2=sizeof(n)/sizeof(n[0]);

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size1; i++)
        {
            int temp=n[i];
        n[i]=n[j];
        n[j]=temp;  
        }
        printf()
        
    }
    
    
}