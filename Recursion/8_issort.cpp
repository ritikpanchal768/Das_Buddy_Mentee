#include<bits/stdc++.h>
using namespace std;
int issort(int n,int a[])
{
    if(n==1)
    {
        return 1;
    }
    if(a[0]<a[1])
    {   
        issort(n-1,a+1);
    }
    else if(a[0]>a[1])
    { 
        return 0;
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
    cout<<issort(n,a);
}