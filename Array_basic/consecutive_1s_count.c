#include<stdio.h>
int main(){
    int n[6]={1,1,1,0,1,1};
    int size=sizeof(n)/sizeof(n[0]);

    int count=0;
    int maxcount=0;
    for (int i = 0; i < size; i++)
    {
        
        if(n[i]==1){count++; }
        else{count=0;}

        if(count>maxcount){maxcount = count;}
    }

        printf("%d",maxcount); 
}

// if we use max(a,b) function in c++ code advantage