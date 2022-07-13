https://www.codingninjas.com/codestudio/problems/longest-common-substring_1235207?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0
int lcs(string &s, string &t){
	//	Write your code here.
      int n=s.size();
    int m=t.size();
    int ans=0;
     vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    for(int j=0;j<=m;j++)
        dp[0][j]=0;
    for(int i=0;i<=n;i++)dp[i][0]=0;
    for(int ind1=1;ind1<=n;ind1++){
        for(int ind2=1;ind2<=m;ind2++){
           if(s[ind1-1]==t[ind2-1])
           {
               dp[ind1][ind2]=1+dp[ind1-1][ind2-1];
               ans=max(ans,dp[ind1][ind2]);
           }
            else
               dp[ind1][ind2]=0; 
        }
    }
    return ans;
}
