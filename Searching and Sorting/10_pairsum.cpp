#include<bits/stdc++.h>
using namespace std;
bool binarysearch(int n,int s[],int b)
{
    int s1=0;
    int e=n-1;
    int mid=(s1+e)/2;
    
    while(s1<e)
    {
        mid=(s1+e)/2;
        if(s[mid]==b)
        {
            return true;
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
void pairsum(int n,int s[],int k)
{
    sort(s,s+n);
    int b;
    int count=0;

    for(int i=0;i<n;i++)
    {
        b=k-s[i];
        if(binarysearch(n,s,b))
        {
            if(b!=s[i])
            {
                cout<<s[i]<<" "<<b<<endl;
            }
            
        }
        count++;
        if(count==n/2)
        {
            break;
        }
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
    
    int k;
    cin>>k;
    pairsum(n,s,k);
    return 0;
}