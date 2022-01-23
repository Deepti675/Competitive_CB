//multiplicative inverse
#include <iostream>

using namespace std;
int Mod_Multiplicative_Inverse(int a,int m){
    int m0=m;
    int y=0,x=1;
    if(m==1)
    return 0;
    while(a>1){
        int q=a/m;
        int temp=m;
        m=a%m;
        a=temp;
        temp=y;
        y=x-q*y;
        x=temp;
    }
    if(x<0)
    x+=m0;
    return x;
}
int main()
{
    int a,m;
    cin>>a>>m;
    cout<<Mod_Multiplicative_Inverse(a,m);
    return 0;
}
