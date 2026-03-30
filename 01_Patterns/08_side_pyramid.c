#include<stdio.h>
int main(){

     int n;
    printf("n - ");
    scanf(" %d",&n);
    for(int j=1;j<=n*2-1;j++)
    {
        int stars=j;
        if(j>n) stars = 2*n-j;
        for (int k = 1; k <=stars; k++)
        {
            printf("*");
        }         
      printf("\n"); 
    }
}

// main logic - 1 to 10 print inner loop
//            - pchi stars var let kri lidho if e 'n' krta vdhi jai
//             toh for loop 1 to stars sudhi print *.

// n - 5
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *