//https://leetcode.com/problems/top-k-frequent-elements/
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     unordered_map<int,int>mp;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>> minheap;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            minheap.push({i->second,i->first});
        }
       int a=0;
        while(a<k)
        {
            v.push_back(minheap.top().second);
            minheap.pop();
            a++;
        }
        return v;
    }
    
};
