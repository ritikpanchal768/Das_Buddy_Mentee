#include<bits/stdc++.h>
using namespace std;

void leftrotation(int n,int a[],int sums,int sumd,int i)
{
   if(n==0)
    {
        cout<<sums<<" "<<sumd;
        return;
    }
    if(i==0 || i%2==0)
    {
        if(a[0]>a[n-1])
        {
            sums=sums+a[0];
            i=i+1;
            leftrotation(n-1,a+1,sums,sumd,i);
        }
        else{
            sums=sums+a[n-1];
            i=i+1;
            leftrotation(n-1,a,sums,sumd,i);
        }
        
    }
    else{
        if(a[0]>a[n-1])
        {
            sumd=sumd+a[0];
            i=i+1;
            leftrotation(n-1,a+1,sums,sumd,i);
        }
        else{
            sumd=sumd+a[n-1];
            i=i+1;
            leftrotation(n-1,a,sums,sumd,i);
        } 
        
    }
    
    
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
    int i=0;
    int sums=0;
    int sumd=0;
    
    leftrotation(n,a,sums,sumd,i);
    return 0;
}