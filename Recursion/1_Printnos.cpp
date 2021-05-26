#include<bits/stdc++.h>
using namespace std;

int printnos(int n)
{
    if(n==0)
    {
        return 0;
    }
    printnos(n-1);
    cout<<n<<endl;    
    return 0;
}

int main()
{
    int n;
    cin>>n;
    printnos(n);
    return 0;
}
