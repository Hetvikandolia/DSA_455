#include<iostream>
using namespace std;


void swap (int* a,int* b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int partition(int arr[],int low,int high)
{     
    int pivot=arr[low];
    int start=low;
    int end=high;
        while(start<end)
        {
            while(arr[start]<=pivot)
            { start++; }
            while(arr[end]>pivot)
            { end--; }
            if(start<end)
            
            { swap(arr[start],arr[end]); }
        }
        swap(arr[low],arr[end]);
        return end; /////////bhhhhhuuuuul
}


void quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pi=partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}


int main()
{
    int arr[]={11,98,2,6,64,24};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++)
        cout<< arr[i] << " ";
    quicksort(arr,0,n-1);
    cout<<"sorted array:"<<endl;
    // printf("sorted array : \n");
    // printarray(arr,n);

    for(int i=0;i<n;i++)
        cout<< arr[i] << " ";
    return 0;
}