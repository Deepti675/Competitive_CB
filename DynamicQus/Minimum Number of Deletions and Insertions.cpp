https://www.codingninjas.com/codestudio/problems/can-you-make_4244510?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0
int canYouMake(string &s, string &t)
{
    // Write your code here.
     int n=s.size();
        int m=t.size();
         vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int j=0;j<=m;j++)
            dp[0][j]=0;
        for(int i=0;i<=n;i++)dp[i][0]=0;
        for(int ind1=1;ind1<=n;ind1++){
            for(int ind2=1;ind2<=m;ind2++){
               if(s[ind1-1]==t[ind2-1])
                   dp[ind1][ind2]=1+dp[ind1-1][ind2-1];
                else
                   dp[ind1][ind2]=max(dp[ind1-1][ind2],dp[ind1][ind2-1]); 
            }
        }
        
        int k= dp[n][m];
        int del=n-k;
        int ins=m-k;
        int ans=((n+m)-2*k);
        return ans;
}
