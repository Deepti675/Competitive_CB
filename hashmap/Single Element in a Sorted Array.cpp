https://leetcode.com/problems/single-element-in-a-sorted-array/
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>up;
        for(int i=0;i<nums.size();i++){
            up[nums[i]]++;
        }
        for(auto x:up){
            if(x.second==1)
                return x.first;
        }
        return 0;
        
    }
};
