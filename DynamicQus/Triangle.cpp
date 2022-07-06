https://leetcode.com/problems/triangle/
class Solution {
public:
    int f(int i,int j,vector<vector<int>>& t,vector<vector<int>>& dp,int n)
    {
        if(i==n-1)
            return t[n-1][j];
        if(dp[i][j]!=-1)return dp[i][j];
        int down=t[i][j]+f(i+1,j,t,dp,n);
        int dia=t[i][j]+f(i+1,j+1,t,dp,n);
        return dp[i][j]=min(down,dia);
    }
    int minimumTotal(vector<vector<int>>& t) {
        int n=t.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return f(0,0,t,dp,n);
        
    }
};
