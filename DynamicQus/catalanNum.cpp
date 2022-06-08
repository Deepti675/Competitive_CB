#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>c(n,0);
    c[0]=c[1]=1;
    for(int i=2;i<=n;i++)
    {
        c[i]=0;
        for(int j=0;j<i;j++)
        {
        c[i]+=c[j]*c[i-j-1];
        }
    }
    cout<<c[n];
    return 0;
}
