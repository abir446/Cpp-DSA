//Prefix Sum

#include<bits/stdc++.h>
using namespace std;
//Brute Force Approach
int largestSubArraySum(int arr[],int n){
    
    int prefix[n]={0};
    prefix[0]=arr[0];
    //building prefix sum array
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
 
    //variable for storing answer 
    int largestSum=0;
 
    for(int i=0;i<n;i++){
        
        for(int j=i;j<n;j++){
            int subArraySum=0;
            if(i==0){
                subArraySum=prefix[j];
            }
            else{
                subArraySum=prefix[j]-prefix[i-1];
            }
            largestSum=max(largestSum,subArraySum);
        }
    }
    return largestSum;
}
//find the largest sum of  the sub std::array


int main()
{
  int arr[]={-2,3,4,-1,5,-12,6,1,3};
  int n=sizeof(arr)/sizeof(int);

 int ans =  largestSubArraySum(arr,n);
 cout<<ans<<endl;
  
  return 0;
}
