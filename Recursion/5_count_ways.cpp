#include<bits/stdc++.h>
using namespace std;

int countways(int n)
{
   if(n==1 || n==2 || n==3)
   {
       return 1;
   }
   if(n%3==0)
   {
       n=n/3;
   }
   else if(n%2==0)
   {
       n=n/2;
   }
   else{
       n=n-1;
   }
   return countways(n)+1;


}
int main()
{
    int n;
    cin>>n;

    cout<<countways(n);
    return 0;
}