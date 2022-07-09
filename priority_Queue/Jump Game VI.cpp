https://leetcode.com/problems/jump-game-vi/
class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<pair<int,int>>pq;
        int sum[n];
        for(int i=n-1;i>=0;i--)
        {
            while(pq.size()&&pq.top().second>i+k)
                pq.pop();
            sum[i]=nums[i];
            sum[i]+=(pq.size()?pq.top().first:0);
            pq.push({sum[i],i});
        }
        return sum[0];
    }
};
