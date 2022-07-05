https://leetcode.com/problems/house-robber/
class Solution {
public:
    int dp[106];
    int fun(int ind,vector<int>&nums,int n)
    {
        if(dp[ind]!=-1)
            return dp[ind];
        if(ind>=n)
            return 0;
        int pick=nums[ind]+fun(ind+2,nums,n);
        int notpick=fun(ind+1,nums,n);
        return dp[ind]=max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        memset(dp,-1,sizeof(dp));
        return fun(0,nums,n);
    }
};
