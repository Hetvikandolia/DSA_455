#include<stdio.h>

int main()
{
    int n;
    printf("n - ");
    scanf(" %d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++)//space
        {    printf(" ");}  
            for(int k=0;k<2*i+1;k++)//stars
            {    printf("*");}
                for(int l=0;l<n-i-1;l++)//space
                {    printf(" ");   }  
        printf("\n");}
    //       *
    //      ***
    //     *****
    //    *******
    //   *********
    //  ***********

    // for(int i=0;i<=n;i++) 
    // {    for(int j=0;j<i;j++){ printf(" ");}  //spaces
    //  for(int k=0;k<n+(n-2*i-1);k++){printf("*");}    //stars
    //  for(int l=0;l<i;l++){printf(" ");} //spaces
    //  printf("\n");} 
// *********
//  *******
//   *****
//    ***
//     *  

}

// n - 5          
//     *    
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****  
//    ***
//     *


    