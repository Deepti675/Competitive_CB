https://leetcode.com/problems/jump-game/
class Solution {
public:
    int fun(vector<int>& nums,int st,int ed,vector<int>& dp)
    {
        if(st==ed)
            return ed;
        else if(st>ed)
            return st;
        if(dp[st]!=-1)return dp[st];
        int res=0;
        for(int i=1;i<=nums[st];i++)
        {
            if(i>ed)
                return false;
        res=fun(nums,st+i,ed,dp);
            if(res==ed)
                break;
        }
        return dp[st]=res;
        
    }
    bool canJump(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        int res=fun(nums,0,nums.size()-1,dp);
        if(res==nums.size()-1)
            return true;
        else
            return false;
    }
};
