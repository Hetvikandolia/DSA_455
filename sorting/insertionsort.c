#include<stdio.h>
 void insertionSort(int arr[],int n)
 {
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        int temp =arr[i];
        j=i-1;
        while(j>=0 && arr[j] > temp){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]= temp;
       
    }
 }



int main()
{
    int arr[] = {11,8,96,24,58};
    int n= sizeof(arr) / sizeof(arr[0]);

    printf("before sorting = \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    insertionSort(arr,n);

    printf("after sorting = \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

        return 0;
}