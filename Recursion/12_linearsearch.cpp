#include<bits/stdc++.h>
using namespace std;
int linearsearch(int n,int a[],int k)
{
    if(n==0)
    {
        return -1;
    }
    if(a[n]==k)
    {
        return n;
    }
    linearsearch(n-1,a,k);
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
    int k;
    cin>>k;

    cout<<linearsearch(n,a,k);
    return 0;
}