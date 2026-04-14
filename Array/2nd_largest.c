#include<stdio.h>
int main(){
    int n[5]={10,5,8,2,30};
    int size=sizeof(n)/sizeof(n[0]);

    int first_max=n[0];
    for (int i = 0; i < size; i++)
    {
        if(n[i]>first_max){first_max=n[i];}
        int larg_2nd=n[j];
        for (int j = 0; j < size; j++)
        {
            
            if(n[j]<first_max){larg_2nd=n[j];}
        }
        printf("second largest %d",larg_2nd);
        
    }
    
}