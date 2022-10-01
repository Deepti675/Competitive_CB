https://leetcode.com/problems/largest-rectangle-in-histogram/
#include<bits/stdc++.h>
class Solution {
public:
    
    int largestRectangleArea(vector<int>& h) {
        int area=0;
        
        vector<int>left;
        
        stack<int>s;
        
        for(int i=0;i<h.size();i++){
            
                while(s.size()>0 && h[s.top()]>=h[i])
                    s.pop();
                if(s.size()==0)
                    left.push_back(-1);
                else
                    left.push_back(s.top());         
            s.push(i);           
        }
        
        vector<long long>right;
        stack<long long>st;
        for(int i=h.size()-1;i>=0;i--){
            
                while(st.size()>0 && h[st.top()]>=h[i])
                    st.pop();
                if(st.size()==0)
                    right.push_back(h.size());
                else
                    right.push_back(abs(st.top()));
            
            st.push(i);
            
        }
        reverse(right.begin(),right.end());
        
        for(int i=0;i<right.size();i++)
            {
                int curr=(right[i]-left[i]-1)*h[i];
                
                area= max(area,curr);
                 
            }
            
         return area;

    }
};
