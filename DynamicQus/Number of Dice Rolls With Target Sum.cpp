https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/
class Solution {
public:
    int mod=1e9+7;
    int f(int i,int t,int k,int n,vector<vector<int>>&dp){
        if(i==n)
        {
            if(!t)return 1;
            return 0;
        }
        if(dp[i][t]!=-1)
            return dp[i][t];
        long long p=0;
        for(int j=1;j<=k;j++){
              if(t>=j)
                p+=f(i+1,t-j,k,n,dp)%mod;
            
            
        }
        return dp[i][t]=p%mod;
    }
    
    int numRollsToTarget(int n, int k, int t) {
        vector<vector<int>>dp(n,vector<int>(t+1,-1));
        return f(0,t,k,n,dp)%mod;
    }
};
