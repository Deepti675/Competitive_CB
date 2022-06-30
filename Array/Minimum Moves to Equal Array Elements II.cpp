//https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int maxi=0,sum=0;
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        
        for(int i=0;i<n;i++){
           if(n%2!=0)
           {
               sum+=abs(nums[n/2]-nums[i]);
           }
            else
            {
                int mid=n/2;
                   sum+=abs(nums[n/2]-nums[i]);
            }
           // maxi=max(maxi,sum);
        }
        return sum;
    }
};
