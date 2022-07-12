https://www.codingninjas.com/codestudio/problems/unbounded-knapsack_1215029?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1
int f(int ind,int w,vector<int>&val,vector<int>&wt,vector<vector<int>>&dp)
{
    if(ind==0)
        return ((int)(w/wt[0]))*val[0];
    if(dp[ind][w]!=-1)return dp[ind][w];
    int notTake=f(ind-1,w,val,wt,dp);
    int take=0;
    if(wt[ind]<=w)
        take=val[ind]+f(ind,w-wt[ind],val,wt,dp);
    return dp[ind][w]= max(take,notTake);
}
int unboundedKnapsack(int n, int w, vector<int> &val, vector<int> &wt)
{
    // Write Your Code Here.
    vector<vector<int>>dp(n,vector<int>(w+1,-1));
    return f(n-1,w,val,wt,dp);
}
