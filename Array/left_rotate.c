#include<stdio.h>
int main(){
    int n[5]={4,10,50,4,1};
    int size=sizeof(n)/sizeof(n[0]);

    int x=n[0];
    for (int i = 0; i < size; i++)
    {
       n[i]=n[i+1];
    }

    n[size-1]=x;

    printf("After rotate : ");

    for (int i = 0; i < size; i++)
    {

        printf("%d ",n[i]);
    }    
}

//store 1st element put at last
//and normal left element fill w next element 