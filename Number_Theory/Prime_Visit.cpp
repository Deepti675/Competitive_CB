//Link:-  https://hack.codingblocks.com/app/practice/3/1039/problem
#include <bits/stdc++.h>

using namespace std;
#define ll long long
void prime_sieve(int *p)
{
    for(int i=3;i<=1000000;i+=2){
        p[i]=1;
    }
    //sieve
    for(ll i=3;i<=1000000;i+=2){
        if(p[i]==1)
        {
            for(ll j=i*i;j<=1000000;j=j+i)
            p[j]=0;
        }
    }
    //spacial case
    p[2]=1;
    p[1]=p[0]=0;
    
}
int main()
{
    int p[1000005]={0};
    prime_sieve(p);
    int csum[1000005]={0};
    for(int i=1;i<=1000000;i++)
    {
        csum[i]=csum[i-1]+p[i];
    }
    int q;
    cin>>q;
    while(q--){
        int a,b;
        cin>>a>>b;
        cout<<csum[b]-csum[a-1]<<endl;
    }
    

    return 0;
}
