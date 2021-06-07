#include<bits/stdc++.h>
using namespace std;
int* reverse1(int n,int a[],int b[])  /*n time complexity*/
{
    
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            b[j]=a[i];
            j++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            b[j]=a[i];
            j++;
        }
    }
    return b;
}

int* reverse(int n,int a[])      /*n^2 time complexity*/
{
    
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0 && a[i+1]<0)
        {
            swap(a[i],a[i+1]);
        }       
    }
    
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0 && a[i+1]<0)
        {
            reverse(n,a);
        }
    }
    return a;    
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
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" "<<endl;
    }
    int b[n];
    reverse1(n,a,b);
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" "<<endl;
    }
    return 0;
}