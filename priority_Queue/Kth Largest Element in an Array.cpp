//https://leetcode.com/problems/kth-largest-element-in-an-array/
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        int mm;
        for(int i=0;i<nums.size();i++)
        {
           pq.push(nums[i]);
            if(pq.size()>k)
                pq.pop();
        }
       
        return pq.top();
    }
};