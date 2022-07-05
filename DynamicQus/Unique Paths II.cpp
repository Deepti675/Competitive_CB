https://leetcode.com/problems/unique-paths-ii/
class Solution {
public:
    int fun(int i,int j,vector<vector<int>>&dp,vector<vector<int>>& obs)
    {
        if(i>=0&&j>=0&&obs[i][j]==1)return 0;
        else if(i==0&&j==0)
            return 1;
        if(i<0||j<0)
            return 0;
       
        if(dp[i][j]!=-1)return dp[i][j];
        int up=fun(i-1,j,dp,obs);
        int left=fun(i,j-1,dp,obs);
        return dp[i][j]=(up+left);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obs) {
        int m=obs.size();
        int n=obs[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return fun(m-1,n-1,dp,obs);
    }
};
