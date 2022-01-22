//https://codeforces.com/problemset/problem/230/B
#include <bits/stdc++.h>

using namespace std;
#define int int64_t
int ar[(int)1e6+10];
set<int>tprime;
void t_prime(){
    tprime.insert(4);
    for(int i=3;i<(int)1e6+1;i+=2)
    {
        if(ar[i]==0)
        {
            tprime.insert(i*i);
            for(int j=i;j<1e6;j+=i){
                ar[j]=1;
            }
        }
    }
}
int32_t main()
{
    
    int n;
    cin>>n;
    t_prime();
    while(n--){
        int x;
        cin>>x;
        if(tprime.find(x)!=tprime.end()){
          cout<<"YES"<<endl;   
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
