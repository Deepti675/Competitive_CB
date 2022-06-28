//https://leetcode.com/problems/find-k-pairs-with-smallest-sums/
class Solution {
public:
    struct compare{
        bool operator()(vector<int> &a, vector<int> &b){
            return a[0]+a[1] < b[0]+b[1];
        }
    };
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
       priority_queue<vector<int>, vector<vector<int>>, compare>p;
        vector<vector<int>>v;
        //vector<int>vv(2);
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(p.size()<k)
                {
                       p.push({nums1[i], nums2[j]});
                }
                else if(p.top()[0] + p.top()[1] > nums1[i]+nums2[j]){
                    p.pop();
                    p.push({nums1[i], nums2[j]});
            }
                else
                    break;
            }
        }
            while(!p.empty())
            {
                v.push_back(p.top());
                p.pop();
            }
        return v;
    }
};
