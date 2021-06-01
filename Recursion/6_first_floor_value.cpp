#include<bits/stdc++.h>
using namespace std;

int floorvalue(int arr[],int n,int x)
{
    if(n==-1)
    {
        return -1;
    }
    if(arr[n]<=x)
    {
        cout<<arr[n];
        return 0;
    }
    else{
        return floorvalue(arr,n-1,x);
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int x;
        cin>>x;

        floorvalue(arr,n,x);
    }
}