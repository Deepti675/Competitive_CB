//Number of divisor of a number 
#include <bits/stdc++.h>
using namespace std;
vector<int>primeSieve(int *p,int n){
    p[0]=p[1]=0;
    p[2]=1;
    for(int i=3;i<=n;i=i+2){
        p[i]=1;
    }
    for(int i=3;i<=n;i=i+2){
        if(p[i]){
            for(int j=i*i;j<=n;j+=2*i){
                p[j]=0;
            }
        }
    }
    vector<int>primes;
    primes.push_back(2);
    for(int i=3;i<=n;i+=2){
        if(p[i]==1){
            primes.push_back(i);
        }
    }
    return primes;
}
int no_of_divsors(int m,vector<int>&primes){
    
    
    int i=0;
    int p=primes[0];
    int ans=1;
    while(p*p<=m){
        if(m%p==0){
            int cnt=0;
            while(m%p==0){
                cnt++;
                m=m/p;
            }
            ans=ans*(cnt+1);  
        }
        //go to the next position
        i++;
        p=primes[i];
    }
    if(m!=1){
        ans=ans*2;
    }
    return ans;
}
int main()
{
   int N=1000000,t;
   int p[N]={0};
   vector<int>primes=primeSieve(p,10000);
  
   cin>>t;
   while(t--){
       int no;
       cin>>no;
       int divs=no_of_divsors(no,primes);
       cout<<divs<<endl;
   }
    return 0;
}
