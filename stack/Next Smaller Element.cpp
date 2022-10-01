https://www.codingninjas.com/codestudio/problems/next-smaller-element_1112581?leftPanelTab=0
#include<bits/stdc++.h>

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    vector<int>v;
    stack<int>s;
    for(int i=n-1;i>=0;i--){
        if(s.size()==0)
            v.push_back(-1);
        else if(s.size()>0 && s.top()<arr[i])
            v.push_back(s.top());
        else if(s.size()>0 && s.top()>=arr[i])
        {
            while(s.size()>0 && s.top()>=arr[i])
            {
                s.pop();
            }
            if(s.size()==0)
                v.push_back(-1);
            else
                v.push_back(s.top());
        }
        s.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    return v;
}
