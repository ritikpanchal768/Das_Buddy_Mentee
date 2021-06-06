#include<bits/stdc++.h>
using namespace std;
void kthsmallest(int n,int a[],int k)
{
    sort(a,a+1);
    cout<<a[k-1];
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
    kthsmallest(n,a,k);
    return 0;
}