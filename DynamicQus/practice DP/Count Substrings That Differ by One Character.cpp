https://leetcode.com/problems/count-substrings-that-differ-by-one-character/
class Solution {
public:
    int dp[100][100];
    int f(string &s,string &t,int i,int j,int sts)
    {
      
        if(i<0||j<0)
            return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int ans=0;
        if(sts==0)
        {
            if(s[i]==t[j])
                ans=f(s,t,i-1,j-1,0);
            else
                ans=1+f(s,t,i-1,j-1,1);
        }
        else
        {
            if(s[i]==t[j])
                ans=1+f(s,t,i-1,j-1,1);
            else
                ans=0;
        }
        return dp[i][j]=ans;
        
    }
    int countSubstrings(string s, string t) {
        int n=s.size();
        int m=t.size();
        
        int res=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                memset(dp,-1,sizeof(dp));
                res+= f(s,t,i,j,0);
            }
        }
        return res;
    }
};
