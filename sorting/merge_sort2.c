#include<stdio.h>
#include<stdlib.h>

void merge(int arr[],int s,int e)
{
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *first =new int[len1];
    int *second=new int[len2];
    
    // copy_values
    // int first[n1],second[n2];
    int mainArrayIndex=s;
    for(int i=0;i<len1;i++)
        first[i]=arr[mainArrayIndex++];
    mainArrayIndex=mid+1;
    for(int i=0;i<len2;i++)
         second[i]=arr[mainArrayIndex++];

    int index1=0;
    int index2=0;
    // int mainArrayIndex=s;
    while(index1<len1 && index2<len2)
    {
        if(first[index1]< second[index2])
        {
            arr[mainArrayIndex++]=second[index1++];
            // i++;
        }
        else{
            arr[mainArrayIndex++]=second[index2++];
            // j++;
        }
        // k++;
    }

    while(index1<len1)
    {
        arr[mainArrayIndex++]=first[index1++];
        // i++;
        // k++;
    }

    while(index2<len2)
    {
        arr[mainArrayIndex++]=second[index2++];
        // j++;
        // k++;
    }
}

void mergeSort(int *arr,int s,int e)
{
    if(s>=e){
        int mid=(s+e)/2;

        mergeSort(arr,s,mid);
        mergeSort(arr,mid+1,e);

        merge(arr,s,e);
    }
}

// void printArray(int A[],int size)
// {
//     for(int i=0;i<size;i++)
//     // {
//         printf("%d\n",A[i]);
//     // }
// }


int main()
{
    int arr[6]={11,98,2,6,64,24};
    int n=6;
    // int arr_size=sizeof(arr) / sizeof(arr[0]);

    // printf("given arrray is \n");
    // printArray(arr,arr_size);

    mergeSort(arr,0,n-1);

         for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
     }
    // printf("sorted array is \n");
    // printArray(arr,arr_size);
    return 0;
}