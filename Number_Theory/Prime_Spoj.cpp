//link: https://www.spoj.com/problems/PRIME1/
//finding the prime numbers in a range
#include<bits/stdc++.h>
using namespace std;
const int N= 100000;

int p[N]={0};
vector<int>primes;

void sieve()
{
    for(int i=2;i<=N;i++){
        if(p[i]==0){
            //store prime in the prime vector
            primes.push_back(i);
            //mark all multiples of i as not prime
            for(int j=i;j<=N;j+=i){
                p[j]=1;//not prime
            }
        }
    }
}
int main()
{
     sieve();//build this sieve once for all prime    
     int t;
     cin>>t;
     while(t--){
         int n,m;
         cin>>m>>n;
         bool segment[n-m+1];
         for(int i=0;i<n-m+1;i++){
             segment[i]=0;
         }
         //here segmented sieve logic
         for(auto x:primes){
             
             //stop the loop if remaining prime numbers are not needed
             if(x*x>n){
                 break;
             }
             int start=(m/x)*x;
             //prime number lies in the segmented sieve range
             if(x>=m and x<=n){
                 start=x*2;
             }
             // mark all multiple of x in the range start to n as not prime
             for(int i=start;i<=n;i+=x){
                 segment[i-m]=1;
             }
         }
         //loop over range m..n and print the primes
         for(int i=m;i<=n;i++){
             if(segment[i-m]==0 and i!=1){
                 cout<<i<<endl;
             }
         }
         cout<<endl;
     }
    return 0;
}
