//https://leetcode.com/problems/maximum-units-on-a-truck/
class Solution {
public:
    int maximumUnits(vector<vector<int>>& box, int tr) {
        sort(begin(box), end(box), [](auto &a, auto &b){return a[1] > b[1];});

        int maxi=0;
        for(auto boxi:box)
        {
            if(tr<boxi[0])
                return maxi+tr*boxi[1];
        maxi+=boxi[0]*boxi[1];
        tr-=boxi[0];
        }
      return maxi;  
    }
    
};
