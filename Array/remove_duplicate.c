#include<stdio.h>
int main(){
    int n[7]={110,50,3,3,3,1,1};
    int size=sizeof(n)/sizeof(n[0]);
    int count;

    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(n[i]==n[j])
                {n[j]=-1;} //mark duplicateeee
        }
        
    }

    for (int i = 0; i < size; i++)
    {
        if (n[i]!=-1)
        {
            printf("%d ",n[i]);
        }
        
    }
    


}


