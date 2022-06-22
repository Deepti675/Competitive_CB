//https://leetcode.com/problems/shortest-completing-word/
class Solution {
public:
    string shortestCompletingWord(string l, vector<string>& w) {
       map<char,int>mpp;
        string res;
        int mini=INT_MAX;
        for(int i=0;i<l.size();i++)
        {
            if(isalpha(l[i]))
                mpp[tolower(l[i])]++;
            
            
        }
        
        for(int i=0;i<w.size();i++)
        {
            map<char,int>temp; 
            bool f=true;
            for(int j=0;j<w[i].size();j++)
                temp[w[i][j]]++;
            for(auto it:mpp)
            {
                if(temp[it.first]<it.second)
                {
                    f=false;
                    break;
                }
            }
            if(f&&w[i].size()<mini)
            {
               mini=w[i].size();
               res=w[i]; 
            }
        }
        return res;
        
    }
};
