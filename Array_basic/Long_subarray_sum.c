// its Longest Subarray with given Sum K(Positives)
#include<stdio.h>
int main(){
     int n[5]={10,5,8,2,30};
    int size=sizeof(n)/sizeof(n[0]);

    int k=15;
    int max=0;

    for (int i = 0; i < size; i++)
    {
        int sum=0;
        // int count=0; //1st mistake count dont have to update 
      for (int j= i; j< size; j++)
      {
        sum= sum+ n[j]; //2nd mistake is i can update sum just add one element from existing mtlb current 
        if(sum==k){
            int count = j-i+1; //current len

            if(count>max){max=count;} //if current past krta moti current max ma nakho
        }
       
      }
    }
     printf("%d ",max); //return longest length which is saved in max
    
}