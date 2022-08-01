https://leetcode.com/problems/minimum-cost-for-tickets/
class Solution {
public:
    bool will_i_travel_today(int cday,vector<int>& days){
        for(int i=0;i<days.size();i++){
            if(days[i]==cday)return true;
        }
        return false;
    }
    int f(int cday,vector<int>& costs,vector<int>& days,vector<int>&dp){
        int n=days.size();
        if(cday>days[n-1])return dp[cday]=0;
        if(dp[cday]!=-1)return dp[cday];
        int ans= (int)1e8;
        if(will_i_travel_today(cday,days))
        {
           ans = f(cday+1,costs,days,dp)+costs[0];
           ans = min(ans,f(cday+7,costs,days,dp)+costs[1]);
           ans = min(ans,f(cday+30,costs,days,dp)+costs[2]); 
        }
        else
        {
           return dp[cday]=f(cday+1,costs,days,dp);
        }
        return dp[cday]=ans;
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n=days.size();
        vector<int>dp(400,-1);
        return f(days[0],costs,days,dp);
    }
};
