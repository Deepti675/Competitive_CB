https://leetcode.com/problems/pascals-triangle-ii/
class Solution {
public:
    int dp[50][50];
    int f(int r,int c)
    {
        if(c==0)return 1;
        if(c==r)return 1;
        if(dp[r][c]!=-1)return dp[r][c];
        return dp[r][c]=f(r-1,c)+f(r-1,c-1);
    }
    vector<int> getRow(int r) {
          memset(dp,-1,sizeof(dp));
          vector<int>rr(r+1);
        for(int i=0;i<=r;i++)
            rr[i]=f(r,i);
        return rr;
    }
};
