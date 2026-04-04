#include<stdio.h>
// int main(){
//     int n;
//     int count=0;
//     printf("enter num-");
//     scanf("%d",&n);
//     // while(n>0){.
//     //     count++;
//     //     n=n/10;
//     // }
//     for (int i = 1; i <= n; i++)
//     {
//         if(n%i==0) {count++;}
//     }
//     if(count>2){printf("Not prime");}
//     else{printf("It is prime"); }
// }


void recur(int n){
    if(n==0) return; 
    printf("hetu ");
    recur(n-1);
}
int main(){
    for (int i = 1; i <= 6; i++)
    {
        recur(i);
    }
    
}