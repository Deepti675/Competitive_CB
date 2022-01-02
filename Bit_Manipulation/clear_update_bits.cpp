/*
1. update ith bit
2. clear ith bit
3. clear last i bits
4. clear a range of bits
*/
#include <iostream>

using namespace std;
void clearbit(int &n,int i)
{
    int mask = ~(1<<i);
    n=n&mask;
}
void updatebit(int &n,int v,int i)
{
    //v=the bit updated with v
    //i=ith bit will get update with v
    int mask = ~(1<<i);
    //seting ith bit first zero 
    int cleared_n = n&mask;
    //now taking the or with v<<i
    n= cleared_n | (v<<i);
}
void clear_last_i_bits(int &n,int i)
{
    int mask=(-1<<i);
    n=n&mask;
}
int clear_range_of_bits(int &n,int i,int j)
{
    //two mask required to get required mask
    int mask1=(-1<<(j+1));
    int mask2=(1<<i)-1;
    int mask= mask1|mask2;
    int ans=n&mask;
}
int main()
{
    int n,i;
    cin>>n>>i;
   // clearbit(n,i);
    //cout<<n;
    //int v;
    //cin>>v;
    //updatebit(n,v,i);
    //cout<<n;
   // clear_last_i_bits(n,i);
    //cout<<n;
    int j;
    cin>>j;
    cout<<clear_range_of_bits(n,i,j);
    
    return 0;
}
