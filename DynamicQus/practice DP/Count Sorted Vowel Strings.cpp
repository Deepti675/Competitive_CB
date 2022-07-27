https://leetcode.com/problems/count-sorted-vowel-strings/
class Solution {
public:
    int f(int n,int k,vector<vector<int>>&dp)
    {
        if(k<0)
            return 0;
        if(n==0)
            return 1;
        if(dp[n][k]!=-1)return dp[n][k];
        int l=f(n,k-1,dp);
        int r=f(n-1,k,dp);
        dp[n][k]=l+r;
        return dp[n][k];
    }
    int countVowelStrings(int n) {
        vector<vector<int>>dp(n+1,vector<int>(5,-1));
        return f(n,4,dp);
        
    }
};
