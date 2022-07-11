https://www.codingninjas.com/codestudio/problems/number-of-subsets_3952532?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0
int f(int ind,int sum,vector<int>&num,vector<vector<int>>&dp){
    if(sum==0)return 1;
    if(ind==0)
    {
        return (num[ind]==sum);
    }
    if(dp[ind][sum]!=-1)return dp[ind][sum];
    int notpick=f(ind-1,sum,num,dp);
    int pick=0;
    if(num[ind]<=sum)
        pick=f(ind-1,sum-num[ind],num,dp);
    return dp[ind][sum]=pick+notpick;
}
int findWays(vector<int> &num, int tar)
{
    // Write your code here.
    int n=num.size();
    vector<vector<int>>dp(n,vector<int>(tar+1,-1));
    return f(n-1,tar,num,dp);
}
