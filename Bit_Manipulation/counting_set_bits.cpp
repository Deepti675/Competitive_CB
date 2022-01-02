#include<bits/stdc++.h>
using namespace std;
//first method
//time complexity(for number n then the bits will be atmost log(n)+1)
int countbits(int n)
{
    int ans=0;
    while(n>0)
    {
        ans+=(n&1);
        n=n>>1;
    }
    return ans;
}
//second method more efficient than first one
int countbitsfast(int n)
{
    int ans=0;
    while(n>0)
    {
        n=n&(n-1);
        ans++;
        
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<countbits(n)<<endl;;
    cout<<countbitsfast(n)<<endl;
    //third method is use __builtin_popcount method 
    cout<<__builtin_popcount(n)<<endl;
    return 0;
}




















