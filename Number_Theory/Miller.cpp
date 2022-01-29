//Given a number n, check if it is prime or not. using miller rabin this mathod is more efficient than fermat method
#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
ll mul(ll a,ll b,ll mod){
    ll res=0;
    while(b){
        if(b&1)res=(res+a)%mod;
        a=(a*2)%mod;
        b>>=1;
    }
    return res;
}
ll power(ll a,ll b,ll mod){
    ll res=1;
    while(b){
        if(b&1)
        res=mul(res,a,mod);
        a=mul(a,a,mod);
        b>>=1;
        
    }
    return res;
}
bool check_composite(ll n,ll a,ll d,int s){
    ll x=power(a,d,n);//a^d%n
    if(x==1||x==n-1)
    return false;
    for(int r=1;r<s;r++){
        x=mul(x,x,n);
        if(x==n-1)
        return false;
    }
    return true;
}
bool miller_rabin(ll n){
    if(n<4)
    return (n==2||n==3);
    int s=0;
    ll d=n-1;
    while((d&1)==0){
        d>>=1;
        s++;
    }
    vector<int>v={2,3,5,7,9,11,13,17,19,23,29,31,37};;
    for(int a:v){
        if(n==a)return true;
        if(check_composite(n,a,d,s))
        return false;
    }
    return true;
}
int main()
{
    ll n;
    cin>>n;
    if(miller_rabin(n))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

    return 0;
}
