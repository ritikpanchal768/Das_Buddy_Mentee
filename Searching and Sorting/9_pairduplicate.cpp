#include<bits/stdc++.h>
using namespace std;

void pairduplicate(int n,int s[])
{
    sort(s,s+n);

    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            cout<<s[i]<<" "<<s[i+1];
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
    pairduplicate(n,s);
    
    return 0;
}