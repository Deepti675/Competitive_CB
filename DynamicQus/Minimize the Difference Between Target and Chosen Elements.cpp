https://leetcode.com/problems/minimize-the-difference-between-target-and-chosen-elements/
class Solution {
public:
    int dp[5001][71];
    int row;
    int col;
    int f(vector<vector<int>>& mat,int r,int sum, int tar){
        
        if(r==row)
            return abs(sum-tar);
        if(dp[sum][r]!=-1)return dp[sum][r];
        int minDiff=INT_MAX;
        for(int j=0;j<col;j++)
        {
            minDiff=min(minDiff,f(mat,r+1,sum+mat[r][j],tar));
        }
        return dp[sum][r]=minDiff;
    }
    
    int minimizeTheDifference(vector<vector<int>>& mat, int tar) {
        row=mat.size();
        col=mat[0].size();
         memset(dp,-1,sizeof(dp));
         return f(mat,0,0,tar);
    }
};
