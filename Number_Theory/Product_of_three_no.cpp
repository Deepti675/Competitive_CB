//link- https://codeforces.com/problemset/problem/1294/C
//First sol
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,a,b,c;
    cin>>t;
    while(t--){
        cin>>n;
        for(a=2;a*a*a<=n;a++){
            if(n%a==0)
            break;
        }
        int rem=n/a;
        for(b=a+1;b*b<=rem;b++)
        {
            if(rem%b==0){
                c=rem/b;
                if(b>=c)
                c=0;
                break;
            }
        }
        if(a*b*c==n)
        {
            cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
  return 0;  
}  
//Second sol
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        set<int>s;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0 && !s.count(i)){
                n/=i;
                s.insert(i);
                break;
            }
        }
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0 && !s.count(i)){
                n/=i;
                s.insert(i);
                break;
            }
        }
        if(s.size()<2 || n==1 || s.count(n))
            cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            s.insert(n);
            for(int i:s) cout<<i<<" ";
            puts("");
        }
    }
    return 0;
}
