//Prefix Sum

#include<bits/stdc++.h>
using namespace std;
//Kadane's Algorithm
int largestSubArraySum(int arr[],int n){
    
    int cs=0;
    int largest=0;
    for (int i=0;i<n;i++)
    {
        cs+=arr[i];
        if (cs<0)
            cs=0;
            
        largest=max(largest,cs);
    }
    return largest;
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
