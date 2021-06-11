#include<bits/stdc++.h>
using namespace std;

int countSquares(int N) 
{
    float s=sqrt(N)-1;
    s=ceil(s);
        
    return s;
} 
int main()
{
    int N;
    cin>>N;

    cout<<countSquares(N);
    return 0;
}