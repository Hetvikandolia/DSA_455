#include<stdio.h>
int main(){
    int n;
    printf("enter array size-");
    scanf("%d",&n);
    int a[20];
    printf("enter array elements - ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("before array \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");

    printf("After array \n");
    for (int i = 0; i < n/2; i++)
    {
        int temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }


    
}