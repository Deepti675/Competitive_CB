#include<bits/stdc++.h>
using namespace std;
struct triplate{
int x,y,Gcd;
};
triplate ExtendedEucliedGCD(int a,int b){
    if(b==0){
        triplate ans;
        ans.x=1;
        ans.y=0;
        ans.Gcd=a;
        return ans;
    }
   triplate smallans= ExtendedEucliedGCD(b,a%b);
   triplate ans;
    ans.Gcd=smallans.Gcd;
    ans.x=smallans.y;
    ans.y=smallans.x-(a/b)*smallans.y;
   
 return ans;    
}
int Multiplicative_Inverse(int a,int m){
    triplate res=ExtendedEucliedGCD(a,m);
    return res.x;
}
int main(){
    int a,M;
    cin>>a>>M;
    cout<<Multiplicative_Inverse(a,M);
    return 0;
}
