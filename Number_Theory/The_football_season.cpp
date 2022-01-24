//link- https://codeforces.com/problemset/problem/1244/C
#include<bits/stdc++.h>
using namespace std;
long long n,p,d,w;
long long x,y;
int main(){
    cin>>n>>p>>w>>d;
    for(y=0;y<=w;y++){
        if((p-d*y)%w==0){
            x=(p-d*y)/w;
            if(x>=0&&y>=0&&x+y<=n){
                cout<<x<<" "<<y<<" "<<n-x-y;
                return 0;
            }
        }
    }
    puts("-1");
    return 0;
}
