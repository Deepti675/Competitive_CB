///////////////////////////////////////////List///////////////////////////////////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
   list<int>l;
   //initialize
   list<int>l1{1,2,3,4,5};
   list<string>st{"apple","guava","mango"};
   st.push_back("pineapple");
   for(auto s:st)
   {
       cout<<s<<"-->";
   }
   cout<<endl;
   //sort 
   st.sort();
   for(auto s:st)
   {
       cout<<s<<"-->";
   }
   cout<<endl;
   //reverse
   st.reverse();
   for(auto s:st)
   {
       cout<<s<<"-->";
   }
   cout<<endl;
   cout<<st.front()<<endl;
   st.pop_front();
   cout<<st.front()<<endl;
   st.push_front("kiwi");
   st.pop_back();
   cout<<st.back()<<endl;
   for(auto s:st)
   {
       cout<<s<<"-->";
   }
   cout<<endl;
   //iteration over list
   for(auto it=st.begin();it!=st.end();it++)
   {
       cout<<(*it)<<"-->";
   }
   cout<<endl;
   st.push_back("orange");
   st.push_back("banana");
   for(auto s:st)
   {
       cout<<s<<"-->";
   }
   cout<<endl;
   //remove fruit
   /*string f;
   cin>>f;
   st.remove(f);
   for(auto s:st)
   {
       cout<<s<<"-->";
   }*/
   //cout<<endl;
   //erase one or more element at a perticular index
   /*auto it=st.begin();
   it++;
   it++;
   st.erase(it);
   for(auto s:st)
   {
       cout<<s<<"-->";
   }
   cout<<endl;*/
   
   //we can insert element to the list
   auto it=st.begin();
   it++;
   st.insert(it,"FruitJuice");
   for(auto s:st)
   {
       cout<<s<<"-->";
   }
   cout<<endl; 
   
 return 0;   
}













