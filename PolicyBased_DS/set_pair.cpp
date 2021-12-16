//if i want to insert duplicate element to inserted in to set
    
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<bits/stdc++.h>
using namespace std;

using namespace __gnu_pbds;

typedef tree<pair<int,int>, null_type, less<pair<int,int>>, rb_tree_tag,
                    tree_order_statistics_node_update>
                    PBDS;

int main()
{
    PBDS st;
    //pair of {value,index}
    st.insert({12,0});
    st.insert({3,1});
    st.insert({4,2});
    st.insert({10,3});
    st.insert({15,4});
    st.insert({15,5});
    for(int i=0;i<st.size();i++)
    {
        cout<<i<<" "<<st.find_by_order(i)->first<<" "<<st.find_by_order(i)->second<<endl;
    }
    return 0;
}
