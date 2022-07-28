https://leetcode.com/problems/egg-drop-with-2-eggs-and-n-floors/
class Solution {
public:
    int f(int e,int f1,vector<vector<int>>&dp){
        int mini=INT_MAX;
        if(e==1 || f1==0 || f1==1)
            return f1;
        if(dp[e][f1]!=-1)return dp[e][f1];
        for(int i=1;i<f1;i++)
        {
            int low1 = f(e-1,i-1,dp);
            int high= f(e,f1-i,dp);
            int ans=1+max(low1,high);
            mini=min(mini,ans);
        }
        return dp[e][f1]=mini;
    }
    int twoEggDrop(int f1) {
        vector<vector<int>>dp(3,vector<int>(f1+1,-1));
       return f(2,f1,dp);
    }
};
