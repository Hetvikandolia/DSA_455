#include<stdio.h>
int main(){
    int n[8]={8, 2, 4, 6, 3, 7, 1};
    int size=sizeof(n)/sizeof(n[0]);
    int k=8;
    
    for (int i = 1; i <= size; i++)
    {
        int found=0;
        for (int j = 0; j < size-1; j++)
        {
            if(n[j]==i){
            found=1;
            break;}
        }
        if(!found){printf("%d",i);}
        
    }
    
}