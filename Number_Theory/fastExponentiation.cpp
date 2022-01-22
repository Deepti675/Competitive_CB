
#include <iostream>

using namespace std;
#define ll long long
ll fastExponentiation(ll a,ll b){
    ll res=1;
    while(b>0){
        if(b&1){
            res=(res*a);
            
        }
        a=a*a;
        b=b>>1;
    }
    return res;
}
int main()
{
    ll a,b;
    cin>>a>>b;
    cout<<fastExponentiation(a,b);
    return 0;
}
