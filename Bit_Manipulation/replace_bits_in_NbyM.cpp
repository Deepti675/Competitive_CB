//input:(N=1024,M=21,i=2,j=6), output:1108
#include<bits/stdc++.h>
using namespace std;
int clear_range_of_bits(int N,int i,int j)
{
    int mask1=(-1<<(j+1));
    int mask2=(i<<i)-1;
    int mask=mask1|mask2;
    int ans=N&mask;
    return ans;
}
int main()
{
    int N,M,i,j;
    cin>>N>>M>>i>>j;
    int n= clear_range_of_bits(N,i,j);
    M=M<<i;
    int ans1=n|M;
    cout<<ans1;
}




















