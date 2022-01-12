//Almost Prime: https://codeforces.com/problemset/problem/26/A
//Almost Prime 
#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define id long double
#define F first
#define S second
#define p pair<int,int>
#define pb push_back
const int N=3005;

int sieve(int n){
    int pr[n+1]={};
    vector<int>primes;
    int i,j;
    for(i=2;i<=n;i++){
        if(!pr[i]){
            primes.pb(i);
            for(j=i;j<=n;j+=i){
                pr[j]++;
            }
        }
    }
    int ans=0;
    for(int i=2;i<=n;i++){
        if(pr[i]==2)ans++;
    }
    return ans;
}
void solve(){
    int n;
    cin>>n;
    cout<<sieve(n);
    
}

int32_t main()
{
    solve();
   return 0;
}



