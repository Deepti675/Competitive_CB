https://leetcode.com/problems/maximum-sum-of-two-non-overlapping-subarrays/
class Solution {
public:
    
    int maxSumTwoNoOverlap(vector<int>& nums, int f, int s) {
        int n=nums.size();
        int dp1[n],dp2[n];
        int sum=0;
        for(int i=0;i<n;i++){
            if(i<f){
            sum+=nums[i];
            dp1[i]=sum;
            }else{
                sum+=nums[i]-nums[i-f];
                dp1[i]=max(dp1[i-1],sum);
            }
        }
        sum=0;
        for(int i=n-1;i>=0;i--){
            if(i+s>=n){
                sum+=nums[i];
                dp2[i]=sum;
            }else{
                sum+=nums[i]-nums[i+s];
                dp2[i]=max(dp2[i+1],sum);
            }
            
        }
        int res=0;
        for(int i=f-1;i<n-s;i++){
            res=max(res,dp1[i]+dp2[i+1]);
        }
        sum=0;
        for(int i=0;i<n;i++){
            if(i<s){
            sum+=nums[i];
            dp1[i]=sum;
            }else{
                sum+=nums[i]-nums[i-s];
                dp1[i]=max(dp1[i-1],sum);
            }
        }
        sum=0;
        for(int i=n-1;i>=0;i--){
            if(i+f>=n){
                sum+=nums[i];
                dp2[i]=sum;
            }else{
                sum+=nums[i]-nums[i+f];
                dp2[i]=max(dp2[i+1],sum);
            }
            
        }
        
        for(int i=s-1;i<n-f;i++){
            res=max(res,dp1[i]+dp2[i+1]);
        }
      return res;  
    }
};
