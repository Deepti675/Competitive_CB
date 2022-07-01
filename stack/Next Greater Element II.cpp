//https://leetcode.com/problems/next-greater-element-ii/
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
      
        stack<int>st;
        int n=nums.size();
     
        for(int i=2*n-1;i>=0;i--)
        {
            int val=nums[i%n];
            while(!st.empty()&&st.top()<=val)
                st.pop();
            
            if(i<n)
            {
                if(st.empty())
                    nums[i]=-1;
                else
                    nums[i]=st.top();
                
            }
            st.push(val);
        }
        return nums;
    }
};
