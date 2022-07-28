https://leetcode.com/problems/sort-integers-by-the-power-value/
class Solution {
public:
    unordered_map<int,int>mpp;
    int f(int x)
    {
        int steps=0;
        if(x==1)return 0;
        if(mpp.find(x)!=mpp.end())return mpp[x];
        if(x%2==0)
            steps=1+f(x/2);
        else
            steps=1+f(3*x+1);
        return mpp[x]=steps;
    }
    int getKth(int lo, int hi, int k) {
       vector<pair<int,int>>v;
        for(int i=lo;i<=hi;i++)
        {
            v.push_back({f(i),i});
        }
        sort(v.begin(),v.end());
        return v[k-1].second;
    }
};
