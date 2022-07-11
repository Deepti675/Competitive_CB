https://leetcode.com/problems/coin-change/
class Solution {
public:
    int fun(int ind,int T,vector<int>&coin,vector<vector<int>>&dp)
    {
        if(ind==0)
        {
            if(T%coin[0]==0)return T/coin[0];
            else
                return 1e9;
        }
        if(dp[ind][T]!=-1)return dp[ind][T];
        int not_take=fun(ind-1,T,coin,dp);
        int take=INT_MAX;
        if(coin[ind]<=T)
            take=1+fun(ind,T-coin[ind],coin,dp);
        return dp[ind][T]=min(take,not_take);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int res= fun(n-1,amount,coins,dp);
        
        if(res>=1e9)
            return -1;
        return res;
    }
};
