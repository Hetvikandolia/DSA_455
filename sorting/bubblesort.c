#include<stdio.h>
void bubblesort(int arr[],int n)
{ 
	for(int i=0;i<n;i++)
	{
		int flag=0; //check swapping continue or not
		for(int j=i+1;j<n;j++)
		{	
			if(arr[i]> arr[j]){
				
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				flag=1;
			}
		}
		if(flag==0)
		break;
	}

}


int main()
{
	int arr[]={11,98,2,6,64,24};
	int n=sizeof(arr)/sizeof(int);
	printf("before sorting = \n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ",arr[i]);
	}


	printf("\n");



	bubblesort(arr,n);


	printf("sorted array :  \n");
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	return 0;
}