#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>arr;

    int h=INT_MIN;
    int l=INT_MAX;

    for (int i=0;i<10;i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);

        if (arr[i]>h)
            h=arr[i];

        if (l<arr[i])
            l=arr[i];
    }


    vector<int> hash(h+1,0);

    for (int i=0;i<10;i++)
    {
        hash[arr[i]]++;
    }

    for (int i=1;i<=h;i++)
    {
        if (hash[i]==0)
        {
            cout<<i<<" ";
        }
    }




    return 0;
}
