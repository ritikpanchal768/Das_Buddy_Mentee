#include<bits/stdc++.h>
using namespace std;

void bubblesort(int n,int a[])
{
    if(n==1)
    {
        return;
    }
    bubblesort(n-1,a+1);
    if(a[0]>a[1])
    {
        swap(a[0],a[1]);
        bubblesort(n-1,a+1);
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
    bubblesort(n,a);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}