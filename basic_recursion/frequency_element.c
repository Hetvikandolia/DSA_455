#include<stdio.h>
int main(){
    // int count=0; cant write here coz of we have to reset everytime so best to write inside loop.
    int n[5]={10,5,10,15,10};
    int size=sizeof(n)/sizeof(n[0]);
    printf("Given array -\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d \n",n[i]);
    }
    printf("Count frequency\n");
    for (int i = 0; i <size; i++)
    {
        if(n[i]==-1)
            continue;
             int count=1;
        for (int j= i+1; j < size; j++)
        {
           if(n[i]==n[j]){
            count++;
            n[j]=-1;
           }
        }
        printf("%d comes %d times\n",n[i],count);
    }
    
    
}