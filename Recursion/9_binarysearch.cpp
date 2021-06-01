#include<bits/stdc++.h>
using namespace std;
int binarysearch(int s,int e,int n,int a[],int k)
{
    int mid;
    if(n<0)
    {
        return -1;
    }
    mid=(s+e)/2;
    
    if(a[mid]==k)
    {
        return mid;
    }
    if(mid>k)
    {
        binarysearch(s,e-(mid-1),n/2,a,k);
    }
    else{
        binarysearch(s+(mid-1),e,n/2,a,k);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    int s=1;
    int e=n;
    
    cout<<binarysearch(s,e,n,a,k);
}