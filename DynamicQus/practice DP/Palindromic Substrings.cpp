https://leetcode.com/problems/palindromic-substrings/
class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        int count=0;
        vector<vector<bool>>dp(n,vector<bool>(n,false));
        for(int k=1;k<=n;k++){
            for(int i=0,j=k-1;j<n;i++,j++){
                if(k==1)dp[i][j]=true;
                else if(k==2)dp[i][j]=(s[i]==s[j]);
                else
                {
                    if(s[i]==s[j]&&dp[i+1][j-1]==true)dp[i][j]=true;
                }
                if(dp[i][j]==true)
                    count++;
            }
        }
        return count;
    }
};
