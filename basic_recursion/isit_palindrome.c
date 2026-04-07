#include<stdio.h>
#include<string.h>
int main(){
    char a[10];
    int flag;
    
    printf("enter string-");
    scanf("%s",a);
    
    int n=strlen(a);
    printf("Result-");

    for (char i = 0; i <n/2; i++)
    {
       if(a[i]==a[n-1-i]){
        flag=1;
       }
       else{flag=0;}
    }
    if(flag==1){printf("true");}
    else{printf("false");}
    


    

}
//string as input --- forgot
//madam 
//by temp