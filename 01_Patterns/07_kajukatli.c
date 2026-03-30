#include<stdio.h>
int main()
{
    for(int i=0;i<=5;i++){
        for(int j=1;j<=9-i+1;j++)//space
        {
            printf(" ");
        }  
            for(int k=1;k<=2*i+1;k++)//stars
            {
                printf("*");
            }
                for(int l=1;l<=9-i+1;l++)//space
                {
                    printf(" ");
                }
            
        
        printf("\n");
        
    }

    
}

    //       *
    //      ***
    //     *****
    //    *******
    //   *********
    //  ***********