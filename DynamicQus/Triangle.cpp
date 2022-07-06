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
//tabulation
class Solution {
public:
 
    int minimumTotal(vector<vector<int>>& t) {
        int n=t.size();
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(int j=0;j<n;j++)
        {
            dp[n-1][j]=t[n-1][j];
        }
        for(int i=n-2;i>=0;i--)
        {
            for(int j=i;j>=0;j--)
            {
                int down=t[i][j]+dp[i+1][j];
                int dia=t[i][j]+dp[i+1][j+1];
                dp[i][j]=min(down,dia);
            }
        }
      return dp[0][0];  
    }
};
//space optimization
class Solution {
public:
 
    int minimumTotal(vector<vector<int>>& t) {
        int n=t.size();
        vector<int>front(n,0),curr(n,0);
        for(int j=0;j<n;j++)
        {
            front[j]=t[n-1][j];
        }
        for(int i=n-2;i>=0;i--)
        {
            for(int j=i;j>=0;j--)
            {
                int down=t[i][j]+front[j];
                int dia=t[i][j]+front[j+1];
                curr[j]=min(down,dia);
            }
            front=curr;
        }
      return front[0];  
    }
};
