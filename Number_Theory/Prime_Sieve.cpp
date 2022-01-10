#include <bits/stdc++.h>
using namespace std;
#define ll long long
//Sieve of Eratosthenes and optimization important for Competitive programming
//sieve Approch - Generate a array containing prime numbers
void prime_sieve(int *p)
{
    //first mark all odd number as prime becoz they can be potential prime number 
    for(int i=3;i<=1000000;i+=2)
    {
        p[i]=1;
    }
    //sieve code
    for(ll i=3;i<=1000000;i+=2){
        //if the current number is not marked (it is prime)
        if(p[i]==1)
        {
            //marked all the multiple of i as prime
            for(ll j=i*i;j<=1000000;j=j+i)
            {
                p[j]=0;
            }
        }
    }
    //spacial case
    p[2]=1;
    p[1]=p[0]=0;
    
}
int main()
{
    int n;
    cin>>n;
    int p[1000005]={0};
    prime_sieve(p);
    //lets print prime up to some range n 
    for(int i=0;i<=n;i++)
    {
        if(p[i]==1){
            cout<<i<<" ";
        }
    }
    return 0;
}
