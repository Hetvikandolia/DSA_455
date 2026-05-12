#include<stdio.h>
int main(){
    int n[5]={5,5,2,2,30};
    int size=sizeof(n)/sizeof(n[0]);

    
    for (int i = 0; i < size; i++)
    {
       int count=0; //mistake i declare before for loop so its never updated after while element chnages
      for (int j= 0; j < size; j++)
      {
        if (n[j] == n[i])
        {
            count++;
        }
      }

      if(count==1){printf("%d ", n[i]);}
    }
    
}