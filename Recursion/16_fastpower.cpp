#include<bits/stdc++.h>
using namespace std;
int fastpower(int a,int n)
{
    if(n==0)
    {
        return 1;
    }
    int small_ans=fastpower(a,n/2);
    small_ans=small_ans*small_ans;
    if(n&1)
    {
        return small_ans*a;
    }
    else{
        return small_ans;
    }
}
int main()
{
    int n;
    cin>>n;
    int a;
    cin>>a;

    cout<<fastpower(a,n);
}