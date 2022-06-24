//https://leetcode.com/problems/sort-array-by-increasing-frequency/
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mpp;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        
        priority_queue<pair<int,int>>pq;
        for(auto i=mpp.begin();i!=mpp.end();i++)
        {
            pq.push({-i->second,i->first});
        }
       int k=0;
        while(pq.size()>0){
        int x = pq.top().first;
            for(int i=0;i<abs(x);i++)nums[k++] = (pq.top().second);
            pq.pop();
        }

        return nums;
    }
};
