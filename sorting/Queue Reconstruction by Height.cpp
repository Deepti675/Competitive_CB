//https://leetcode.com/problems/queue-reconstruction-by-height/
class Solution {
public:
    static bool comp(vector<int>&a,vector<int>&b)
    {
        if(a[0]==b[0])
            return a[1]<b[1];
        return a[0]>b[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& pep) {
        sort(pep.begin(),pep.end(),comp);
        vector<vector<int>>result;
        for(auto it:pep)
            result.insert(result.begin()+it[1],it);
        return result;
    }
};
