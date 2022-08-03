https://leetcode.com/problems/maximal-square/
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        int ans=0;
        for(int i=n;i>=0;i--){
            for(int j=m;j>=0;j--){
                if(i==n || j==m || matrix[i][j]=='0')dp[i][j]=0;
                    
                else 
                {
                    dp[i][j]=1+min({dp[i+1][j],dp[i][j+1],dp[i+1][j+1]});
                    ans=max(ans,dp[i][j]);             
                }
        }
    }
    
         return ans*ans;     
    }
};
