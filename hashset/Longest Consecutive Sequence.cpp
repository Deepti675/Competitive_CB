//https://leetcode.com/problems/longest-consecutive-sequence/
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
         int c=0;
        for( int it:nums)
        {
            if(s.find(it-1)==s.end())
            {
            int crr=it;
            int cc=1;
            while(s.find(crr+1)!=s.end()){
                crr++;
                cc++;
            }
            c=max(c,cc);
            }
        }
       return c; 
    }
};
