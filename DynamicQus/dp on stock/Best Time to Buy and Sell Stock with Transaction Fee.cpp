https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/
class Solution {
public:
    int f(int ind,int buy,vector<int>& pri,int n,vector<vector<int>>&dp,int fee){
        if(ind==n)return 0;
        int prof=0;
        if(dp[ind][buy]!=-1)return dp[ind][buy];
        if(buy){
            prof=max(-pri[ind]+f(ind+1,0,pri,n,dp,fee),f(ind+1,1,pri,n,dp,fee));
        }
        else
            prof=max(pri[ind]-fee+f(ind+1,1,pri,n,dp,fee),f(ind+1,0,pri,n,dp,fee));
        
        return dp[ind][buy]=prof;
    }
    int maxProfit(vector<int>& pri,int fee) {
        int n=pri.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return f(0,1,pri,n,dp,fee);
    }
    
};
