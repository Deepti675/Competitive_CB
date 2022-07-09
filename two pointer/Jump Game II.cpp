https://leetcode.com/problems/jump-game-ii/
class Solution {
public:
    int jump(vector<int>& nums) {
      int res=0;
        int l=0,r=0;
        while(r<nums.size()-1)
        {
            int far=0;
            for(int i=l;i<r+1;i++)
            {
                far=max(far,i+nums[i]);
            }
            l=r+1;
            r=far;
            res+=1;
        }
        return res;
    }
};
