https://leetcode.com/problems/longest-increasing-subsequence/
class Solution {
public:
    //tabulation
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        
        for(int ind=n-1;ind>=0;ind--){
            for(int prev=ind-1;prev>=-1;prev--){
                //not take
                int len;
                len=dp[ind+1][prev+1];
                //take
                if(prev==-1||nums[ind]>nums[prev])
                    len=max(len,1+dp[ind+1][ind+1]);
                dp[ind][prev+1]=len;

          }
        }
        return dp[0][0];
    }
};
