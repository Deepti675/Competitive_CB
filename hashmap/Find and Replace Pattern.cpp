https://leetcode.com/problems/find-and-replace-pattern/
class Solution {
public:
    vector<int>f(string pattern){
        vector<int>temp;
        unordered_map<char,int>mpp;
        int ind=0;
        if(pattern.size()==0)
            return {};
        for(int i=0;i<pattern.size();i++){
            if(mpp.find(pattern[i])==mpp.end()){
                mpp.insert({pattern[i],ind++});
                temp.push_back(mpp[pattern[i]]);
            }
            else
                temp.push_back(mpp[pattern[i]]);
        }
        return temp;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
       
       vector<int>pt_hold=f(pattern); 
        vector<string>res;
       for(int i=0;i<words.size();i++)
       {
           vector<int>temp = f(words[i]);
           if(pt_hold==temp)
               res.push_back(words[i]);
               
       }
        return res;
        
    }
};
