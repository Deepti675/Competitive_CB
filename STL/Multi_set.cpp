#include<bits/stdc++.h>
using namespace std;
int main()
{
    //multi set- that can store multiple element that have same element
    //stored in specific order->sorted according to internal comparision object
    //value once inserted can not be modified
    //associative container->means key and value are same here
    //values are refered by the keys not by the values
    //underlying implementation is BST
    int a[]={10,20,10,30,30,30,89,30,54};
    multiset<int>m(a,a+9);
    //iterate over set
    for(int x:m)
    {
        cout<<x<<",";
    }
    cout<<endl;
    //erase-10//all occurenec of 10 will deleted 
    m.erase(10);
    for(int x:m)
    {
        cout<<x<<",";
    }
    cout<<endl;
    //inserted
    m.insert(50);
    for(int x:m)
    {
        cout<<x<<",";
    }
    cout<<endl;
    //count of element
    cout<<m.count(30)<<endl;;
    //get all element which are equal to 30
    pair<multiset<int>::iterator,multiset<int>::iterator>range=m.equal_range(30);
    for(auto it=range.first;it!=range.second;it++)
    {
        cout<<(*it)<<"--";
    }
    cout<<endl;
    //lower bound and upper bound
    for(auto it=m.lower_bound(20);it!=m.upper_bound(80);it++)
    {
        cout<<(*it)<<"-";
    }
    return 0;
}













