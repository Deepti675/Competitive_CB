//https://leetcode.com/problems/most-common-word/
class Solution {
public:
    string mostCommonWord(string para, vector<string>& ban) {
        string s="";
        string s1;
        int maxi=INT_MIN;
        map<string,int>mpp;
        
        for(int i=0;i<para.size();i++)
        {
            if(para[i]==' '||para[i]==',')
            {
                if(s!="")
                    mpp[s]++;
                s.clear();
            }
            else if(isalpha(para[i]))
                s+=tolower(para[i]);
        }
        mpp[s]++;
        for(int i=0;i<ban.size();i++)
        {
            if(mpp.find(ban[i])!=mpp.end())
                mpp.erase(mpp.find(ban[i]));
        }
        for(auto it:mpp)
        {
            if(it.second>maxi)
            {
                maxi=it.second;
                s1=it.first;
            }
        }
       return s1; 
    }
};
