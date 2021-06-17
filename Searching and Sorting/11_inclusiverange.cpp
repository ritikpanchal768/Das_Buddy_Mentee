#include<bits/stdc++.h>
using namespace std;

int binarysearch(int n,int s[],int b)
{
    int s1=0;
    int e=n-1;
    int mid=(s1+e)/2;
    
    while(s1<e)
    {
        mid=(s1+e)/2;
        if(s[mid]==b)
        {
            return mid;
        }
        else if(s[mid]>b)
        {
            e=mid;    
        }
        else{
            s1=mid;
        }
    }
    
}
int inclusiverange(int n,int s[],int a,int b)
{
    int idxb = binarysearch(n,s,b);
    int idxa = binarysearch(n,s,a);

    for(int i=idxa;i<=idxb;i++)
    {
        cout<<s[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int a,b;
    cin>>a>>b;
    inclusiverange(n,s,a,b);
    return 0;
}