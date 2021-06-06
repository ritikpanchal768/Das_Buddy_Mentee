#include<bits/stdc++.h>
using namespace std;

void leftrotation(int n,int a[],int d)
{
    int temp=a[0]; 
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            a[j]=a[j+1];
        }
        a[n-1]=temp;
        temp=a[0];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int d;
    cin>>d;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    leftrotation(n,a,d);
    return 0;
}