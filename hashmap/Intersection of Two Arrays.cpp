//https://leetcode.com/problems/intersection-of-two-arrays/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mpp;
       // map<int,int>mpp1;
        vector<int>v;
        for(int i=0;i<nums1.size();i++)
        {
         mpp[nums1[i]]++;   
        }
        for(int i=0;i<nums2.size();i++)
        {
             if(mpp.find(nums2[i])!=mpp.end())
             {
                 v.push_back(nums2[i]);
                 mpp.erase(nums2[i]);
             }
            
                 
        }
        return v;
        
    }
};
