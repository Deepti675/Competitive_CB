//link- https://hack.codingblocks.com/app/practice/8/137/problem
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n,k;
    
    while(t--){
        cin>>n>>k;
        //factorization of k
        //p1,p2,p3,.....,pl
        int occ=0;
        int ans=INT_MAX;
        for(int i=2;i*i<=k;i++){
            if(k%i==0){
                occ=0;
                while(k%i==0){
                    occ++;
                    k=k/i;
                }
                
            
            //find out the power of i in n! side by side
            int cnt=0;
            long long p=i;
            while(p<=n){
                cnt+=n/p;
                p=p*i;
            }
            
            ans=min(ans,cnt/occ);
        }
    }
    //we may have a case when still a prime factor is left
    	if(k>1){
        int cnt=0;
        long long p=k;
        while(p<=n){
                cnt+=n/p;
                p*=k;
            }
            ans=min(ans,cnt);
    }
    if(ans==INT_MAX){
        ans=0;
    }
    cout<<ans<<endl;
}    
    return 0;
}
