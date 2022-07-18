https://leetcode.com/problems/palindrome-partitioning-ii/
//recursion
class Solution {
public:
    bool ispal(int i,int j,string s){
        while(i<j){
            if(s[i]!=s[j])return false;
            i++;
            j--;
        }
        return true;
    }
    int f(int i,int n,string &s){
        if(i==n)return 0;
        
        int mincost=INT_MAX;
        //int cost;
        
        for(int j=i;j<n;j++){
            if(ispal(i,j,s)){
               int cost=1+f(j+1,n,s);
                mincost=min(mincost,cost);
                
            }
        }
        return mincost;
    }
    int minCut(string s) {
       int n=s.size();
        return f(0,n,s)-1;
    }
};
//memoization
class Solution {
public:
    bool ispal(int i,int j,string s){
        while(i<j){
            if(s[i]!=s[j])return false;
            i++;
            j--;
        }
        return true;
    }
    int f(int i,int n,string &s,vector<int>&dp){
        if(i==n)return 0;
        
        int mincost=INT_MAX;
        if(dp[i]!=-1)return dp[i];
        
        for(int j=i;j<n;j++){
            if(ispal(i,j,s)){
               int cost=1+f(j+1,n,s,dp);
                mincost=min(mincost,cost);
                
            }
        }
        return dp[i]=mincost;
    }
    int minCut(string s) {
       int n=s.size();
        vector<int>dp(n,-1);
        return f(0,n,s,dp)-1;
    }
};
//tabulation 
class Solution {
public:
    bool ispal(int i,int j,string s){
        while(i<j){
            if(s[i]!=s[j])return false;
            i++;
            j--;
        }
        return true;
    }
int minCut(string s) {
       int n=s.size();
        vector<int>dp(n+1,0);
        dp[n]=0;
        for(int i=n-1;i>=0;i--){
                int mincost=INT_MAX;
                for(int j=i;j<n;j++){
                   if(ispal(i,j,s)){
                       int cost=1+dp[j+1];
                       mincost=min(mincost,cost);
                }
            }
           dp[i]=mincost;  
        }
        return dp[0]-1;
    }
};
