#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> arr;
    int max=0;
    for (int i=0;i<10;i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);

        if (arr[i]>max)
            max=arr[i];
    }

    vector<int>hash(max,0);
    for (int i=0;i<10;i++)
    {
        hash[arr[i]]++;
    }

    for (int i=1;i<=max;i++)
    {
        if (hash[i]>1)
            cout<<i<<" ";
    }

    

    return 0;
}
