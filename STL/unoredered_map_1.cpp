#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int>m;
    //1.insert
    m.insert(make_pair("mango",100));
    pair<string,int>p;
    p.first="apple";
    p.second=120;
    m.insert(p);
    m["banana"]=20;
    //2.search
    string fruit;
    cin>>fruit;
    auto it=m.find(fruit);
    if(it!=m.end())
    {
        cout<<"price of "<<fruit<<" is "<<m[fruit]<<endl;
    }
    else
    cout<<"fruit is not present"<<endl;
    //another way to find a perticular map
    //it store uniqe key only once
    if(m.count(fruit)){
        cout<<"Price of "<<m[fruit]<<endl;
        
    }
    else
    {
        cout<<"could not find "<<endl;
    }
    //3.erase
    m.erase(fruit);
    if(m.count(fruit)){
        cout<<"Price of "<<m[fruit]<<endl;
    }
    else
    {
        cout<<"could not find "<<endl;
    }
    m["kiwi"]=90;
    m["guava"]=900;
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" and "<<it->second<<endl;
    }
    //for search to traverse the map
    
    for(auto p:m){
        cout<<p.first<<":"<<p.second<<endl;
    }
    return 0;
}













