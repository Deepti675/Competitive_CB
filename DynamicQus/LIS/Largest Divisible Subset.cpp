https://leetcode.com/problems/largest-divisible-subset/
class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,1),hash(n),temp;
        int maxi=1,li=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            hash[i]=i;
            for(int prev=0;prev<i;prev++){
                if(nums[i]%nums[prev]==0&& 1+dp[prev]>dp[i]){
                    dp[i]=1+dp[prev];
                    hash[i]=prev;
                }
            }
            if(dp[i]>maxi){
                maxi=dp[i];
                li=i;
            }
            
        }
        temp.push_back(nums[li]);
        while(hash[li]!=li)
        {
            li=hash[li];
            temp.push_back(nums[li]);
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};
