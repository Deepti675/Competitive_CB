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
//tabulation
int matrixMultiplication(vector<int> &arr, int N)
{
    // Write your code here.
    int dp[N][N];
    for(int i=1;i<N;i++)dp[i][i]=0;
    for(int i=N-1;i>=1;i--){
        for(int j=i+1;j<N;j++){
            int mini=1e9;
            for(int k=i;k<j;k++){
                int s=arr[i-1]*arr[k]*arr[j]+dp[i][k]+dp[k+1][j];
                if(s<mini)mini=s;
            }
             dp[i][j]=mini;
        }
    }
    return dp[1][N-1];
}
