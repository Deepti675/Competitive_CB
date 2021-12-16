#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<bits/stdc++.h>
using namespace std;

using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag,
                    tree_order_statistics_node_update>
                    PBDS;
int main()
{
    //this structure work as a set so duplicates removed autometically
    PBDS st;
    st.insert(12);
    st.insert(3);
    st.insert(4);
    st.insert(10);
    st.insert(15);
    for(int i=0;i<st.size();i++)
    {
        cout<<i<<" "<<*st.find_by_order(i)<<endl;
    }
    //find how many element are strically smaller than the given element 
    //we can not do with the help of set thats why policy based data structure is used otherwised we have to do segement tree and smaller
    cout<<st.order_of_key(5)<<endl;//it tells how many element are smaller than 5
    
    return 0;
}
