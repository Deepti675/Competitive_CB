https://leetcode.com/problems/split-array-into-consecutive-subsequences/
class Solution {
public:
    bool isPossible(vector<int>& nums) {
        map<int,int>mpp,mpp1;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto i:nums){
            if(mpp[i]==0)
                continue;
            mpp[i]--;
            if(mpp1[i-1]>0){
                mpp1[i-1]--;
                mpp1[i]++;
            }
            else if(mpp[i+1]!=0 && mpp[i+2]!=0){
                mpp[i+1]--;
                mpp[i+2]--;
                mpp1[i+2]++;
            }
            else
                return false;
        }
        return true;
    }
};
