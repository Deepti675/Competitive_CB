https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/
class Solution {
public:
    int f(int ind,int buy,vector<int>& pri,int n,vector<vector<int>>&dp){
        if(ind>=n)return 0;
        int prof=0;
        if(dp[ind][buy]!=-1)return dp[ind][buy];
        if(buy){
            prof=max(-pri[ind]+f(ind+1,0,pri,n,dp),f(ind+1,1,pri,n,dp));
        }
        else
            prof=max(pri[ind]+f(ind+2,1,pri,n,dp),f(ind+1,0,pri,n,dp));
        
        return dp[ind][buy]=prof;
    }
    int maxProfit(vector<int>& pri) {
        int n=pri.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return f(0,1,pri,n,dp);
    }
};
