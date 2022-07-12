//https://www.codingninjas.com/codestudio/problems/unbounded-knapsack_1215029?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0
int unboundedKnapsack(int n, int w, vector<int> &val, vector<int> &wt)
{
    // Write Your Code Here.
    vector<vector<int>>dp(n,vector<int>(w+1,0));
    for(int W=0;W<=w;W++)
        dp[0][W]=((int)(W/wt[0]))*val[0];
    for(int ind=1;ind<n;ind++){
        for(int W=0;W<=w;W++){
            int notTake=dp[ind-1][W];
            int take=0;
            if(wt[ind]<=W)
               take=val[ind]+dp[ind][W-wt[ind]];
          dp[ind][W]= max(take,notTake);
        }
    }
    return dp[n-1][w];
}
