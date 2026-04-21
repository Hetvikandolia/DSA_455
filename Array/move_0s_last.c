#include<stdio.h>
int main(){
    int n[8]={1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
    int size=sizeof(n)/sizeof(n[0]);

    for (int i = 0; i < size; i++)
    {
        if(n[i]==0){
            n[size-1]=n[i];
        }
        else{
            break;
        }
    }

    printf("After moving zeros last");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", n[i]);
    }
    
    
}