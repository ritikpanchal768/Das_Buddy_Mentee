#include<bits/stdc++.h>
using namespace std;
//using stl
void stl_firstlast(int arr[],int n,int x)
{
    int s;

    s = lower_bound(arr,arr+n,x);

    int e;

    e = upper_bound(arr,arr+n,x)-1;
    
    cout<<s<<" "<<e;
}
//using binary search
int first(int arr[],int n,int x)
{
    
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<e)
    {
        int mid=(s+e)/2;
        if(arr[mid]>x)
        {
            e=mid;
        }
        else if(arr[mid]<x)
        {
            s=mid;
        }
        else{
            ans=mid;
            e=mid-1;
        }
    }
    return ans;
}
int last(int arr[],int n,int x)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<e)
    {
        int mid=(s+e)/2;
        if(arr[mid]>x)
        {
            e=mid;
        }
        else if(arr[mid]<x)
        {
            s=mid;
        }
        else{
            ans=mid;
            s=mid+1;
        }
    }
    return ans;
}
int main()
{
    int n,x;
    cin>>n>>x;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<first(arr,n,x);
    cout<<" ";
    cout<<last(arr,n,x);
    
    stl_firstlast(arr,n,x);
   
    return 0;
}