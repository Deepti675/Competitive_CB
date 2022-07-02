https://leetcode.com/problems/maximum-area-of-a-piece-of-cake-after-horizontal-and-vertical-cuts/
class Solution {
public:
    int maxArea(int h, int w, vector<int>& hori, vector<int>& verti) {
        int i;
        
        sort(hori.begin(),hori.end());
        sort(verti.begin(),verti.end());
        int max_h=hori[0];
        int max_w=verti[0];
        for(i=1;i<hori.size();i++)
        {
            max_h=max(max_h,hori[i]-hori[i-1]);
        }
            max_h=max(max_h,h-hori[i-1]);
        
        for(i=1;i<verti.size();i++)
        {
            max_w=max(max_w,verti[i]-verti[i-1]);
        }
            max_w=max(max_w,w-verti[i-1]);
        
        return ((long long)max_h*max_w)%1000000007;
    }
};
