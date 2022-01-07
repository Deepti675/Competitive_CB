//fast exponetiation
#include<bits/stdc++.h>
using namespace std;
int pw(int a,int n)
{
    if(n==0)
    return 1;
    int subprob=pw(a,n/2);
    if(n&1)
    {
        return a*subprob*subprob;
    }
    else
    {
        return subprob*subprob;
    }
}
int main()
{
    int a,n;
    cin>>a>>n;
    cout<<pw(a,n)<<endl;
    return 0;
}
