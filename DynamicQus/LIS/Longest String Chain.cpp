https://leetcode.com/problems/longest-string-chain/
class Solution {
public:
    static bool comp(string &s1,string &s2)
    {
        return s1.size()<s2.size();
    }
    bool check(string &s1,string &s2)
    {
        if(s1.size()!=1+s2.size())return false;
        int f=0,s=0;
        while(f<s1.size())
        {
            if(s1[f]==s2[s])
            {
                f++;
                s++;
                
            }
            else
            {
                f++;
            }
        }
        if(f==s1.size()&s==s2.size())return true;
        return false;
    }
   
    int longestStrChain(vector<string>& words) {
        sort(words.begin(),words.end(),comp);
        int n=words.size();
         vector<int>dp(n,1);
        int maxi=1;
        for(int i=0;i<n;i++)
        {
            for(int prev=0;prev<i;prev++)
            {
                if(check(words[i],words[prev])&&1+dp[prev]>dp[i])
                    dp[i]=1+dp[prev];
            }
            if(dp[i]>maxi)
            {
                maxi=dp[i];
            }
        }
        return maxi;
    }
};
