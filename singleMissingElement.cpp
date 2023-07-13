//Program for finding single missing element from an array of continuous integers

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int>arr={2,3,4,5,7,8,9};
    int diff=arr[0]-0;
    int missing=-1;
    for (int i=0;i<arr.size();i++)
    {
        if ((arr[i]-i)!=diff)
            missing=i+diff;
    }
    cout<<"Missing element in the array: "<<missing<<endl;
    return 0;;
}
