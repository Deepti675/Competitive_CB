https://leetcode.com/problems/out-of-boundary-paths/
class Solution {
public:
    int dp[60][60][60];
    long long int modd=1e9+7;
    int f(int i,int j,int n,int m,int mm){
        
        if(i<0||i>=n||j<0||j>=m)
            return 1;
        
        if(mm<=0)return 0;
        if(dp[i][j][mm]!=-1)return dp[i][j][mm];
        
        int up=f(i-1,j,n,m,mm-1);
        
        int down=f(i+1,j,n,m,mm-1);
        
        int left=f(i,j-1,n,m,mm-1);
        
        int right=f(i,j+1,n,m,mm-1);
        
        return dp[i][j][mm]=( up % modd + down % modd + left % modd + right % modd ) % modd;
    }
    int findPaths(int n, int m, int mm, int srow, int scol) {
        
      memset(dp, -1, sizeof(dp));
        
        return f(srow,scol,n,m,mm);
    }
};
