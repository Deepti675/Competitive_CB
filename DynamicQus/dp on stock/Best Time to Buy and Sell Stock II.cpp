https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
class Solution {
public:
    int f(int ind,int buy,vector<int>& pri,int n,vector<vector<int>>&dp){
        if(ind==n)return 0;
        int prof=0;
        if(dp[ind][buy]!=-1)return dp[ind][buy];
        if(buy){
            prof=max(-pri[ind]+f(ind+1,0,pri,n,dp),f(ind+1,1,pri,n,dp));
        }
        else
            prof=max(pri[ind]+f(ind+1,1,pri,n,dp),f(ind+1,0,pri,n,dp));
        
        return dp[ind][buy]=prof;
    }
    int maxProfit(vector<int>& pri) {
        int n=pri.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return f(0,1,pri,n,dp);
    }
};
//tabulation
class Solution {
public:
    int maxProfit(vector<int>& pri) {
        int n=pri.size();
        vector<vector<int>>dp(n+1,vector<int>(2,0));
        dp[n][0]=dp[n][1]=0;
        for(int ind=n-1;ind>=0;ind--){
            for(int buy=0;buy<=1;buy++){
                int prof=0;
               
                if(buy){
                    prof=max(-pri[ind]+dp[ind+1][0],dp[ind+1][1]);
                }
                else
                    prof=max(pri[ind]+dp[ind+1][1],dp[ind+1][0]);

             dp[ind][buy]=prof;
            }
        }
        
        return dp[0][1];
    }
};
