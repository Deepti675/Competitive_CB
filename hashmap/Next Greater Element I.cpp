//https://leetcode.com/problems/next-greater-element-i/
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       //stack solution
        unordered_map<int,int>mpp;
        stack<int>st;
        vector<int>v;
        int n=nums2.size();
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty()&& st.top()<=nums2[i])
                st.pop();
            int ans=(st.empty())?-1:st.top();
            mpp.insert({nums2[i],ans});
            st.push(nums2[i]);
        }
        for(auto x: nums1)
        {
            v.push_back(mpp[x]);
        }
        return v;
    }
};
