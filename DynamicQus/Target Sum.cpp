https://www.codingninjas.com/codestudio/problems/target-sum_4127362?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0
int f(int ind,int sum,vector<int>&num,vector<vector<int>>&dp){
   
    if(ind==0)
    {
       if(sum==0&&num[0]==0)return 2;
       if(sum==0||sum==num[0])return 1; 
        return 0;
    }
    if(dp[ind][sum]!=-1)return dp[ind][sum];
    int notpick=f(ind-1,sum,num,dp);
    int pick=0;
    if(num[ind]<=sum)
        pick=f(ind-1,sum-num[ind],num,dp);
    return dp[ind][sum]=(pick+notpick);
}
int findWays(vector<int> &num, int tar)
{
    // Write your code here.
    int n=num.size();
    vector<vector<int>>dp(n,vector<int>(tar+1,-1));
    return f(n-1,tar,num,dp);
}
int countPartitions(int n, int d, vector<int> &arr) {
    // Write your code here.
    int totsum=0;
    for(int i=0;i<arr.size();i++)
    {
        totsum+=arr[i];
    }
    if(totsum-d<0||(totsum-d)%2)return false;
    return findWays(arr,((totsum-d)/2));
}
int targetSum(int n, int target, vector<int>& arr) {
    // Write your code here.
    return countPartitions(n,target,arr);
}
