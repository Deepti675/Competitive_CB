//set bit,get bit ,odd number or not with the help on and and or
#include <iostream>

using namespace std;
bool isOdd(int n)
{
    return(n&1);
}
//find i'th bit
int getbit(int n,int i)
{
    int mask=(1<<i); 
    int bit=(n&mask)>0?1:0;
    return bit;
}
//set i'th bit
int setbit(int n,int i)
{
   int mask=(1<<i);
   int ans=n|mask;
   return ans;
}
int main()
{
    int n=5;
    int i=1;
    //cout<<isOdd(n);
    //cout<<getbit(n,i);
    cout<<setbit(n,i);
    
    return 0;
}
