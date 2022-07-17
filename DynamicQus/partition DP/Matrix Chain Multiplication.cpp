https://www.codingninjas.com/codestudio/problems/matrix-chain-multiplication_975344?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0
int f(int i,int j,vector<int> &arr,vector<vector<int>>&dp)
{
    int mini=1e9;
    if(i==j)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    for(int k=i;k<j;k++){
        int s=arr[i-1]*arr[k]*arr[j]+f(i,k,arr,dp)+f(k+1,j,arr,dp);
        if(s<mini)mini=s;
    }
    return dp[i][j]=mini;
}
int matrixMultiplication(vector<int> &arr, int N)
{
    // Write your code here.
    vector<vector<int>>dp(N,vector<int>(N,-1));
    return f(1,N-1,arr,dp);
}
