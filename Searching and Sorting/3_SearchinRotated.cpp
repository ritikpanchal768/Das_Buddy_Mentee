#include<bits/stdc++.h>
using namespace std;
int findp(int a[],int n)
{
    int p;
    int s=0;
    int e=n-1;
    int mid;
    while(s<e)
    {
        mid=(s+e)/2;
        if(a[mid]>a[mid+1])
        {
            p=mid;
            break;
        }
        else
        {
            s=mid;
        }
    }
    return p;
}
void searchrotated(int a[],int target,int n)
{
    int p = findp(a,n);
    int s=0;
    int e=n;
    int mid;
    if(target<a[0])
    {
        s=p;
    }
    else{
        e=p+1;
    }
    
    while(s<e)
    {
        mid=(s+e)/2;
        if(a[mid]>target)
        {
            e=mid;
        }
        else if(a[mid]<target)
        {
            s=mid;
        }
        else{
            cout<<mid;
            break;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int target;
    cin>>target;
    searchrotated(a,target,n);
}