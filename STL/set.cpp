#include<bits/stdc++.h>
using namespace std;
int main()
{
    //set contain only unique element
    int arr[]={10,20,30,10,20,70,80};
    int n=sizeof(arr)/sizeof(int);
    set<int>s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }
    //print all the element
    for(set<int>::iterator it=s.begin();it!=s.end();it++){
        cout<<*(it)<<",";
    }
    return 0;
}













