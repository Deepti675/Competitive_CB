https://www.codingninjas.com/codestudio/problems/partition-a-set-into-two-subsets-such-that-the-difference-of-subset-sums-is-minimum_842494?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0
int minSubsetSumDifference(vector<int>& nums, int n)
{
	// Write your code here.
            int totsum=0;
        //int n=nums.size();
        
        for(int i=0;i<n;i++)
            totsum+=nums[i];
        
        vector<vector<bool>>dp(n+1,vector<bool>(totsum+1,0));
        
        for(int i=0;i<n;i++)
            dp[i][0]=true;
        
        if(nums[0]<=totsum)
        dp[0][nums[0]]=true;
        
        for(int ind=1;ind<n;ind++){
            for(int target=1;target<=totsum;target++){
                
                bool not_take=dp[ind-1][target];
                bool take=false;
                
                if(nums[ind]<=target)
                    take=dp[ind-1][target-nums[ind]];
                
               dp[ind][target]=take|not_take; 
            }
        }
       int mini=1e9;
        for(int i=0;i<=totsum/2;i++){
            if(dp[n-1][i]==true)
            {
                int s1=i;
                int s2=totsum-i;
                mini=min(mini,abs(s2-s1));
            }
        }
        return mini;
  
}
