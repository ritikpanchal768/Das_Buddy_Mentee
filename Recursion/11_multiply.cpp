#include<bits/stdc++.h>
using namespace std;

int mult(int a,int b)
{
    if(b==1)
    {
        return a;
    }
    return a+mult(a,b-1);
}

int main()
{
    int a,b;
    cin>>a>>b;

    cout<<mult(a,b);
}