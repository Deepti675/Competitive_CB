https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/stacks/next-greater-element-left-official/ojquestion
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    stack<int>s;
    vector<int>v;
    for(int i=0;i<n;i++){
        if(s.size()==0)
        {
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top()>arr[i])
        {
            v.push_back(s.top());
        }
        else if(s.size()>0 && s.top()<=arr[i])
        {
            while(s.size()>0 && s.top()<=arr[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
        
    }
   // reverse(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<endl;
    }
    return 0;
}
