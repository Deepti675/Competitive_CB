//https://leetcode.com/problems/non-decreasing-array/
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int pos=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]>nums[i])
            {
                
            if(pos==1)
                return false;
            pos++;
            if(i<2||nums[i-2]<=nums[i])
                nums[i-1]=nums[i];
            else
                nums[i]=nums[i-1];
        }
        }
        return true;
    }
};
