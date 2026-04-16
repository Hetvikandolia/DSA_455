#include<stdio.h>
int main(){
     int n[5]={110,50,34,2,1};
     int ans;
    int size=sizeof(n)/sizeof(n[0]);

    for (int i = 0; i < size-1; i++)
    {
        if(n[i]<n[i+1]){
            ans=0;
            break;
        }
        
    }
    if(ans){printf("array's fielding set");}
    else{printf("rip array");}
    
}