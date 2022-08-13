https://leetcode.com/problems/substring-with-concatenation-of-all-words/
class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int n=words[0].size();//leg
        int n1=words.size();//quan
        int t=n*n1;//target
        vector<int>ans;
        unordered_map<string,int>mpp1;
        for(int i=0;i<words.size();i++)
        {
            mpp1[words[i]]++;
        }
        if(s.size()<t)
            return ans;
        for(int i=0;i<=s.size()-t;i++){
            unordered_map<string,int>mpp2;
              mpp2=mpp1;
            int j;
            for(j=0;j<words.size();j++){
                
            string ss= s.substr(i+j*n, n);
                if(mpp2.count(ss)==0)
                    break;
                else if(mpp2[ss]!=0)
                    mpp2[ss]--;
                else
                    break;
            }
            if(j==n1)
                ans.push_back(i);
        }
        return ans;
    }
};
