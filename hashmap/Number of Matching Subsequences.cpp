https://leetcode.com/problems/number-of-matching-subsequences/
class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
         map<char,vector<int>>mpp;
        int count=0;
        int i=0;
        for(auto it: s){
            mpp[it].push_back(i++);
        }
        for(int k=0;k<words.size();k++)
        {
            int l=-1;
            string curr=words[k];
            for(int j=0;j<curr.size();j++){
                //for char is found in the map or not
                auto it=upper_bound(mpp[curr[j]].begin(),mpp[curr[j]].end(),l);
                if(it==mpp[curr[j]].end())break;
                l=*it;
                if(j==curr.size()-1)count++;
            }
        }
        return count;
    }
};
