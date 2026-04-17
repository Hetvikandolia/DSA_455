#include<stdio.h>
int main(){
    int n[5]={10,5,8,2,30};
    int size=sizeof(n)/sizeof(n[0]);

    //best approch would be sort the elements
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(n[i] > n[j]){
                int temp = n[i];
                n[i] =n[j];
                n[j] =temp;
            }
        }
    }
        printf("2nd largest element - %d", n[size-2]);
}
//just sort whole array and print 2nd element by size-2