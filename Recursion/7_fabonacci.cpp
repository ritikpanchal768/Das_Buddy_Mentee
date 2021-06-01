#include<bits/stdc++.h>
using namespace std;

int fab(int n)
{
    if(n==2)
    {
        return 1;
    }
    if(n==1)
    {
        return 0;
    }
    int f1=fab(n-1);
    int f2=fab(n-2);
    return f1+f2;

}
int main()
{
    int n;
    cin>>n;

    cout<<fab(n);
}