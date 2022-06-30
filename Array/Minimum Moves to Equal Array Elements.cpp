//https://leetcode.com/problems/minimum-moves-to-equal-array-elements/
class Solution {
public:
    int minMoves(vector<int>& nums) {
        //need to find sumof diffrence of all the element from the minimum element
    
            int mini=*min_element(nums.begin(),nums.end());
            int res=0;
        for(auto it:nums)
        {
            res+=(it-mini);
        }
        return res;
    }
};
