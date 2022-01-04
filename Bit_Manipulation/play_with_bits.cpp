//counting number of set bits in a range
//example in between 10 to 15 there are 17 set bits
#include <iostream>

using namespace std;
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
int main()
{
    int a,b,ans=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        ans+=countbits(i);
    }
    cout<<ans<<endl;
    return 0;
}
