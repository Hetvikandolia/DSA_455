#include<stdio.h>
int search(int arr[],int n,int data)
{
    for(int i=0;i<n;i++)
        if(arr[i]==data)
         return i;
         return -1;
}

int main(void)
{
    int arr[]={11,98,2,6,64,24};
    int data=6;
    int n=sizeof(arr)/sizeof(arr[0]);
    // int data=6;
    int result=search(arr,n,data);
    
    if(result==-1)
        { printf("element not found!!!"); }
    else
    { printf("element found at %d",result); }
    return 0;
}