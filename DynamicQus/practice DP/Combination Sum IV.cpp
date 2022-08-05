https://leetcode.com/problems/combination-sum-iv/
class Solution {
public:
    int f(vector<int>& nums,int t,vector<int>& dp){
        int ans=0;
        if(t==0)return 1;
        if(dp[t]!=-1)return dp[t];
        for(auto it:nums){
            if(t>=it){
                ans+=f(nums,t-it,dp);
            }
        }
        return dp[t]=ans;
    }
    int combinationSum4(vector<int>& nums, int t) {
        vector<int>dp(t+1,-1);
        return f(nums,t,dp);
    }
};
