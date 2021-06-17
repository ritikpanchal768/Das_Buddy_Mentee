#include <bits/stdc++.h>
using namespace std;


int median(int s[], int n) 
{
    sort(s,s+n);
    int med=n/2;
    return s[med];
}

int main()
{
    int n;
    cin >> n;
    int s[n];

    
    for(int i=0;i<n;i++) 
    {
        cin >> s[i];
    }
    
    cout << median(s,n) << endl;
    return 0;
}