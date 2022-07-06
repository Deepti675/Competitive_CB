https://leetcode.com/problems/minimum-path-sum/
class Solution {
public:
    int fun(int i,int j,vector<vector<int>>&grid,vector<vector<int>>&dp)
    {
        if(i==0&&j==0)
        {
            return grid[i][j];
        }
        if(i<0||j<0)return 1e9;
        if(dp[i][j]!=-1)return dp[i][j];
        int up=grid[i][j]+fun(i-1,j,grid,dp);
        
        int left=grid[i][j]+fun(i,j-1,grid,dp);
        
        return dp[i][j]=min(up,left);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return fun(n-1,m-1,grid,dp);
    }
};
//tabulation
class Solution {
public:
   
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0&&j==0)
                    dp[i][j]=grid[i][j];
                else
                {
                    int up=grid[i][j];
                    if(i>0)up+=dp[i-1][j];
                    else up+=1e9;
                    int left=grid[i][j];
                    if(j>0)left+=dp[i][j-1];
                    else left+=1e9;
                    dp[i][j]=min(up,left);
                }
            }
        }
        return dp[n-1][m-1];
    }
};
