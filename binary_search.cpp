
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[]={10,20,30,50,100};
    int n=sizeof(a)/sizeof(int);
    //search for a element using binary_search function for sorted array. 
    int key;
    cin>>key;
    bool it=binary_search(a,a+n,key);
    if(it)
    cout<<"present "<<endl;
    else
    cout<<"Not present";
    
    return 0;
}
