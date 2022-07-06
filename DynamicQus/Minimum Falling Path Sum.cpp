https://leetcode.com/problems/minimum-falling-path-sum/
class Solution {
public:
    int f(int i,int j,vector<vector<int>>& matrix,vector<vector<int>>& dp)
    {
        
        if(j<0||j>=matrix[0].size())
            return INT_MAX;
        
        if(i==0)
            return matrix[0][j];
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int s=         f(i-1,j,matrix,dp);
        
        int leftdiag =  f(i-1,j-1,matrix,dp);
        
        int rightdiag = f(i-1,j+1,matrix,dp);
        
        return dp[i][j] = matrix[i][j] + min(s,min(leftdiag,rightdiag));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        int n=matrix.size();
        
        int mini=INT_MAX;
        
        vector<vector<int>>dp(n,vector<int>(n,-1));
        for(int j=0;j<n;j++)
        {
          int x= f(n-1,j,matrix,dp);
          mini= min(mini,x);
        }
        return mini;
    }
};
