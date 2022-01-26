//Linear Diophantine Equations

#include <bits/stdc++.h>

using namespace std;
int gcd(int a,int b){
    return (b==0)?a:gcd(b,a%b);
}
bool ispossible(int a,int b,int c){
    return(c%gcd(a,b)==0);
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;//ex- a=3,b=6,c=9 output=possible
    ispossible(a,b,c)?cout<<"Possible\n":
                      cout<<"Not Possible\n";

    return 0;
}
