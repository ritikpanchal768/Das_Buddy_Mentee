#include<bits/stdc++.h>
using namespace std;
int midofthree(int A,int B,int C)
{
    if(A>B)
    {
        if(A<C)
        {

            return A;
        }
        else if(B>C){
            return B;   
        }
        else
        {
            return C;
        }
    }
    else if(B>A){
        if(B<C)
        {
            return B;
        }
        else if(A>C){
            return A;
        }
        else{
            return C;
        }
    }
    else if(B>C){
        if(B<A)
        {
            return B;
        }
        else if(A<C){
            return C;
        }
        else{
            return A;
        }
    }
}
int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    
    cout<<midofthree(A,B,C);

    return 0;
}