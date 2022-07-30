https://leetcode.com/problems/arithmetic-slices/
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int count=0,temp=0,diff=0,ind=0;
        int n=nums.size();
        
        if(n<3)return 0;
        temp=nums[1]-nums[0];
        for(int i=1;i<n-1;i++){
            diff=nums[i+1]-nums[i];
            if(temp==diff)
                ind++;
            else
            {
                temp=diff;
                ind=0;
            }
            count+=ind;
        }
        return count;
    }
};
