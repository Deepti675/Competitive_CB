#include <bits/stdc++.h>
using namespace std;
#define ll long long
//naive approch O(n) for one number 
//for finding all number in a range n then time complexity will be O(n*sqrt(n))
bool prim(int n)
{
    if(n==1)
    {
        return false;
    }
    if(n==2)
    {
        return true;
    }
    for(int i=2;i*i<n;i++)
    {
        if(n%i==0)
             return false;
    }
    return true;
 
}
int main()
{
    int n;
    cin>>n;
    cout<<prim(n);
    return 0;
}
