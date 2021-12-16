/*The next lecture in a high school requires two topics to be discussed. The i-th topic is interesting by ai units for the teacher and by bi units for the students.

The pair of topics i and j (i<j) is called good if a[i]+a[j]>b[i]+b[j] (i.e. it is more interesting for the teacher).

Your task is to find the number of good pairs of topics.

a[i]+a[j]>b[i]+b[j]
a[i]-b[i]>b[j]-a[j]
let c=a[i]-b[j]

*/

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<bits/stdc++.h>
using namespace std;

using namespace __gnu_pbds;
//uses pair because element are duplicate here
typedef tree<pair<int,int>, null_type, less<pair<int,int>>, rb_tree_tag,
                    tree_order_statistics_node_update>
                    PBDS;

int main()
{
   int n;
    cin>>n;
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        c[i]=a[i]-b[i];
    }
    
    PBDS st;
    long long int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=(st.size()-st.order_of_key({-c[i],10000000}));
        st.insert({c[i],i});
    }
    cout<<ans;
       return 0;
}
