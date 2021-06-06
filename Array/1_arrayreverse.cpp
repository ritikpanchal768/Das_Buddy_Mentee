#include<bits/stdc++.h>
using namespace std;
void reverse(int n,int a[])
{
    int h;

    for(int i=0;i<n/2;i++)
    {
        
        h=(n-1)-i;
        swap(a[i],a[h]);

    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
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
    reverse(n,a);
    return 0;
}