#include<stdio.h>

void swap (int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

void selectionsort(int arr[],int n)
{
    int min_idx,j,i;
    for(i=0;i<n-1;i++)
        {
            min_idx=i;
		    for(j=i+1;j<n;j++)
                if(arr[j]<arr[min_idx])
                    min_idx=j;
                    if(min_idx != i) ///bhuuuullll
				    swap(&arr[min_idx],&arr[i]);
        }
}

int main()
{
	int arr[]={5,4,7,8,9,1};
	int n=sizeof(arr)/sizeof(arr[0]);

	printf("before sorting: \n");
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);		

	selectionsort(arr,n);
	printf("\n");
	printf("sorted array :  \n");

		for(int i=0;i<n;i++)
		printf("%d ",arr[i]);		
	return 0;
}