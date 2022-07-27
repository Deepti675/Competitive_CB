https://leetcode.com/problems/number-of-good-ways-to-split-a-string/
class Solution {
public:
    int numSplits(string s) {
        int n=s.size();
        int ans=0;
        map<char,int>mpp;
        vector<int>pre(n),suf(n);
        for(int i=0;i<n-1;i++)
        {
            mpp[s[i]]++;
            pre[i]=mpp.size();
        }
        mpp.clear();
        for(int i=n-1;i>0;i--)
        {
            mpp[s[i]]++;
            suf[i]=mpp.size();
        }
        for(int i=1;i<n;i++){
            if(pre[i-1]==suf[i])
                ans++;
        }
        return ans;
    }
};
