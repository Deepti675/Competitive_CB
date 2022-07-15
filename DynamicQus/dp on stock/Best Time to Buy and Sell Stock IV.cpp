https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/
class Solution {
public:
    int f(int ind,int buy,int cap,vector<int>& pri,int n,vector<vector<vector<int>>>&dp){
        if(ind==n)return 0;
        if(cap==0)return 0;
        if(dp[ind][buy][cap]!=-1)return dp[ind][buy][cap];
        int prof=0;
        //if(dp[ind][buy]!=-1)return dp[ind][buy];
        if(buy){
            prof=max(-pri[ind]+f(ind+1,0,cap,pri,n,dp),f(ind+1,1,cap,pri,n,dp));
        }
        else
            prof=max(pri[ind]+f(ind+1,1,cap-1,pri,n,dp),f(ind+1,0,cap,pri,n,dp));
        
        return dp[ind][buy][cap]=prof;
    }
    int maxProfit(int k,vector<int>& pri) {
        int n=pri.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(k+1,-1)));
        return f(0,1,k,pri,n,dp);
    }
   
};
