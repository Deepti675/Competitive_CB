#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<char,string>m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char ch;
        string s;   
        cin>>ch>>s;
        m.insert(make_pair(ch,s));
    }
    //try to print the entire map
    for(auto p:m)
    {
        cout<<p.first<<" --> "<<p.second<<endl;
    }
    //lower bound and upper bound
    cout<<"lower to upper bound print"<<endl;
    auto it2=m.lower_bound('b');
    auto it3=m.upper_bound('d');
    for(auto it4=it2;it4!=it3;it4++)
    {
        cout<<it4->first<<"-->"<<it4->second<<endl;
    }
    //serach for cat
    auto f=m.find('c');
    if(f->second=="cat")
    {
        m.erase(f);
    }
    for(auto p:m)
    {
        cout<<p.first<<" --> "<<p.second<<endl;
    }
    
    return 0;
}













