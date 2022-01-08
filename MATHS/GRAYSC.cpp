//Problem--> https://www.codechef.com/problems/GRAYSC

#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main(){
    unsigned ll a[130];
    ll n;
    cin>>n;
    
    if(n>=130){
        cout<<"Yes";
        return 0;
    }
    
    
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
            for(ll k=j+1;k<n;k++){
                for(ll l=k+1;l<n;l++){
                    if((a[i]^a[j]^a[k]^a[l])==0){
                        cout<<"Yes";
                        return 0;
                    }
                    
                }
            }
        }
    }
    cout<<"No";
    return 0;
    
}
