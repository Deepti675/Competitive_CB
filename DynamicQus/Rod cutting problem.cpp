https://www.codingninjas.com/codestudio/problems/rod-cutting-problem_800284?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0
int f(int ind,int N,vector<int> &price,vector<vector<int>>&dp)
{
    if(ind==0)
        return N*price[0];
    if(dp[ind][N]!=-1)return dp[ind][N];
    int notTake=f(ind-1,N,price,dp);
    int take=INT_MIN;
    int R_length=ind+1;
    if(R_length<=N)
        take=price[ind]+f(ind,N-R_length,price,dp);
    return dp[ind][N]= max(take,notTake);
}
int cutRod(vector<int> &price, int n)
{
	
    vector<vector<int>>dp(n,vector<int>(n+1,-1));
    return f(n-1,n,price,dp);
}
//tabulation
int cutRod(vector<int> &price, int n)
{
	//tabulation
    vector<vector<int>>dp(n,vector<int>(n+1,0));
    for(int N=0;N<=n;N++)
    {
        dp[0][N]=N*price[0];
    }
    for(int ind=1;ind<n;ind++){
        for(int N=0;N<=n;N++){
            int notTake=dp[ind-1][N];
            int take=INT_MIN;
            int R_length=ind+1;
            if(R_length<=N)
                take=price[ind]+dp[ind][N-R_length];
             dp[ind][N]= max(take,notTake);
        }
    }
    return dp[n-1][n];
}
