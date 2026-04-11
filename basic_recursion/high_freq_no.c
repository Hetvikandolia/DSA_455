#include<stdio.h>
int main(){
    int n[6]={10,5,10,15,5,10};
    int size=sizeof(n)/sizeof(n[0]);
    int min=size;
    int max=0,minele,maxele;


    printf("Given array -\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d \n",n[i]);
    }
    printf("Count frequency\n");
    for (int i = 0; i <size; i++)
    {
        
        if(n[i]==-1)
            continue;
             int count=1;
        for (int j= i+1; j < size; j++)
        {
           if(n[i]==n[j]){
            count++;
            n[j]=-1;
           }
          
           
        }
        //only uodate min max elements and frequency. 
         if(count < min){min=count; minele=n[i]; }
           if(count > max){max=count; maxele=n[i]; }
    }

     printf("highest : %d comes %d times\n",maxele,max);
        printf("lowest : %d comes %d times\n",minele,min);
    
    
    
}