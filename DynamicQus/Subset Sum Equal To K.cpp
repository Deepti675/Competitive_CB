https://www.codingninjas.com/codestudio/problems/subset-sum-equal-to-k_1550954?leftPanelTab=0
bool f(int n, int k, vector<int> &arr,vector<vector<int>>&dp){
    if(k==0)return true;
    if(n==0)return (arr[0]==k);
    if(dp[n][k]!=-1)return dp[n][k];
        bool not_take=f(n-1,k,arr,dp);
        bool take=false;
        if(arr[n]<=k)take=f(n-1,k-arr[n],arr,dp);
        return dp[n][k]=take|not_take;

}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    vector<vector<int>>dp(n,vector<int>(k+1,-1));
    return f(n-1,k,arr,dp);
}
