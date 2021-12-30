//find unique number in an array 
//using bitwise opretor it will be more efficient solution 
//xor opretor
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int num,ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        ans=ans^num;
    }
    cout<<ans;
    
    return 0;
}
