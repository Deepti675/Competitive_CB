https://leetcode.com/problems/word-subsets/
class Solution {
public:
    bool isSubset(vector<int>& s,vector<int>& d){
        for(int i=0;i<26;i++){
            if(d[i]>s[i])return false;
        }
        return true;
    }
    vector<string> wordSubsets(vector<string>& w1, vector<string>& w2) {
        vector<string>res;
        vector<int>target(26);
        for(string i:w2)
        {
            vector<int>temp(26);
            for(char ch:i)
            {
                temp[ch-'a']++;
                target[ch-'a']=max(target[ch-'a'],temp[ch-'a']);
            }
            
        }
        for(string i:w1){
            vector<int>arr(26);
            for(char ch:i){
                arr[ch-'a']++;
            }
            if(isSubset(arr,target))
                res.push_back(i);
        }
        return res;
    }
};
