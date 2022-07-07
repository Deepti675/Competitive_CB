https://www.codingninjas.com/codestudio/problems/ninja-and-his-friends_3125885?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0
//memoized solution
 int fun(int i,int j1,int j2,int r,int c,vector<vector<int>> &grid, vector<vector<vector<int>>> &dp)
    {
        int maxi=-1e8;
        if(j1<0||j2<0||j1>=c||j2>=c)
            return -1e8;
        if(dp[i][j1][j2]!=-1)
            return dp[i][j1][j2];
        if(i==r-1)
        {
            if(j1==j2)
                return grid[i][j1];
            else
                return grid[i][j1]+grid[i][j2];
        }
        for(int dj1=-1;dj1<=1;dj1++)
        {
            for(int dj2=-1;dj2<=1;dj2++)
            {
                if(j1==j2)
                   maxi=max(maxi,fun(i+1,j1+dj1,j2+dj2,r,c,grid,dp)+grid[i][j1]);
                else
                    maxi=max(maxi,fun(i+1,j1+dj1,j2+dj2,r,c,grid,dp)+grid[i][j1]+grid[i][j2]);
            }
        }
        return dp[i][j1][j2]=maxi;
    }
    
int maximumChocolates(int r, int c, vector<vector<int>> &grid) {
    // Write your code here.
    //dp[r][c][c] 
    vector<vector<vector<int>>> dp(r, vector<vector<int>>(c, vector<int>(c,-1)));
   return fun(0,0,c-1,r,c,grid,dp);
}
