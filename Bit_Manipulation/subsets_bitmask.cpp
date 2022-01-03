//generate subsets using bit masking
#include <bits/stdc++.h>

using namespace std;
void filterChar(int n,char a[])
{
    int j=0;
    while(n>0)
    {
        int last_bit=(n&1);
        if(last_bit)
        {
            cout<<a[j];
        }
        j++;
        n=n>>1;
    }
    cout<<endl;
}
void printSubsets(char a[])
{
    int n=strlen(a);
                  //for 3 (1<<3) will be 7 means 0 to 7, 8 subsets are possible
    for(int i=0;i<(1<<n);i++)
    {
        filterChar(i,a);
    }
}
int main()
{
    char a[1000];
    cin>>a;
    printSubsets(a);
    return 0;
}
