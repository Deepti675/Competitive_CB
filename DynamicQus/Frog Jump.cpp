//https://leetcode.com/problems/frog-jump/
class Solution {
public:
    bool fun(vector<int>&st,int i,int k,vector<vector<int>>&dp)
    {
        if(i>=st.size()||i<0||k<=0)
            return false;
        if(i==st.size()-1)
            return true;
        if(dp[i][k]!=-1)
            return dp[i][k];
        bool res=false;
        if(mpp.find(st[i]+k)!=mpp.end())
        {
            res=res|fun(st,mpp[st[i]+k],k,dp);
        }
        if(i>0&&mpp.find(st[i]+k+1)!=mpp.end())
        {
            res=res|fun(st,mpp[st[i]+k+1],k+1,dp);
        }
        if(i>0&&mpp.find(st[i]+k-1)!=mpp.end())
        {
            res=res|fun(st,mpp[st[i]+k-1],k-1,dp);
        }
        return dp[i][k]=res;
    }
    unordered_map<int,int>mpp;
    bool canCross(vector<int>& st) {
        int n=st.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        for(int i=0;i<n;i++)
        {
            mpp[st[i]]=i;
        }
        return fun(st,0,1,dp);
    }
};
