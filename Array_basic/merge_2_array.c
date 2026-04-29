#include<stdio.h>
int main(){
    int n[8]={10,5,8,2,2,2,30};
    int size1=sizeof(n)/sizeof(n[0]);

    int m[3]={10,888,6};
    int size2=sizeof(m)/sizeof(m[0]);

    int ans[10];
    int k=0;
    
    for (int  i = 0; i < size1; i++)
    {
        int found=0;
        for (int j = 0; j < k; j++)
        {
            if (n[i]==ans[j])
            {
                found=1;
                break;
            }
        }
        if(!found){ans[k] = n[i]; k++; } 
    }
    

    for (int  i = 0; i < size2; i++)
    {
        int found=0;
        for (int j = 0; j < k; j++)
        {
            if (m[i]==ans[j])
            {
                found=1;
                break;
            }
        }
        if(!found){ans[k] = m[i]; k++; } 
    }

    for (int i = 0; i < k; i++)
    {
        printf("%d ",ans[i]); }
    
}