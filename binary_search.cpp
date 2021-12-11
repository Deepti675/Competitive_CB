
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[]={10,20,30,40,40,40,50,100};
    int n=sizeof(a)/sizeof(int);
    //search for a element using binary_search function for sorted array. 
    int key;
    cin>>key;
    bool it=binary_search(a,a+n,key);
    if(it)
    cout<<"present "<<endl;
    else
    cout<<"Not present";
    //two more things
    //get the index of the element
    //lower_bound(s,e,key)and upper_bound(s,e,key)
    auto itt=lower_bound(a,a+n,40);
    cout<<"lower_bound of 40 "<<itt-a<<endl;
    auto ittt=upper_bound(a,a+n,40);
    cout<<"upper bound of 40 "<<ittt-a<<endl;
    cout<<"occurance frequency of 40 is :"<<ittt-itt<<endl;
    return 0;
}
