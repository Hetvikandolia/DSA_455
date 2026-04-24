#include<stdio.h>
int main(){
    int n[8]={1 ,0 ,2 ,3 ,0 ,0 ,0 };
    int size=sizeof(n)/sizeof(n[0]);

    for (int i = 0; i < size; i++)
    {
        for (int j= 0; j< size-1; j++) //if size sudhi run krsu toh error
        {
            if(n[i]==0){  //check if zero
                n[j]=n[j+1]; //if its , then just shift 
            }
            n[size-1]=n[j]; // last ma zero add kr dyo everytime
        }
        printf("%d ",n[i]); //print array
    }
}