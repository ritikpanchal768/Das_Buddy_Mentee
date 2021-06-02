#include<bits/stdc++.h>
using namespace std;
void linearsearch(int n,int a[],int k)
{
    if(n==-1)
    {
        return;
    }
    if(a[n]==k)
    {  
        cout<<n<<" ";
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

    linearsearch(n,a,k);
    return 0;
}