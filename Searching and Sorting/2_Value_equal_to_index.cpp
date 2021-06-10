#include<bits/stdc++.h>
using namespace std;
vector<int> valueEqualToIndex(int arr[], int n)
{
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        if(i+1==arr[i])
        {
            a.push_back(i+1);
        }
    }
    return a;
}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> a = valueEqualToIndex(arr,n);
    
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i];
    }
}