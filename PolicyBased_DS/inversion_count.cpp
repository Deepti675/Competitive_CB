#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<bits/stdc++.h>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag,
                    tree_order_statistics_node_update>
                    PBDS;
                    
                    
                    
//++++++++++++++++++++++Find Inversion in array using policy based data structure+++++++++++++++++++++//
//inversion means in an array i<j(index) and a[i]>a[j](index values)////////////////////////////////////
int main()
{
    //all element are distinct here
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    PBDS st;
    int inversion_count=0;
    for(int i=0;i<n;i++)
    {
        inversion_count+=(st.size()-st.order_of_key(a[i]));
        st.insert(a[i]);
    }
    cout<<inversion_count;
       return 0;
}
