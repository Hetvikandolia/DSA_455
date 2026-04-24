//left kth position move thse 
//not about right shift position  

#include<stdio.h>
int main(){
    int n[5]={10,5,8,2,30};
    int size=sizeof(n)/sizeof(n[0]);

    int k;
    printf("enter kth position-");
    scanf("%d",&k);
    k=k%size;


    for (int i = 0; i < k; i++)  //kth position hatavnu tya sudhi chalvo
    {
        int first=n[0]; // first save kro 
        for (int j = 0; j < size-1; j++) // one by one rest elements shift 
        {
            n[j]=n[j+1];
        
        }
    n[size-1]=first;  //last element store   
    } //every time chalse etle one by one last m add thse kth position 



    //print updated array 
    printf("valid seq.");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",n[i]);
    }
    
    
    
}