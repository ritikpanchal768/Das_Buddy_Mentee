#include<bits/stdc++.h>
using namespace std;
void minmax(int n,int a[])
{
    int min=100000000;
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    cout<<min<<" "<<max;
    
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
    minmax(n,a);
    return 0;
}