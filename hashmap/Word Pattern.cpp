class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>mpp;
        set<string>st; 
        string ss="";
        vector<string>v;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' '){
                v.push_back(ss);
                ss="";
            }
            else
                ss+=s[i];
        
        }
        v.push_back(ss);
        if(v.size()!=pattern.size())
        {
            return false;
        }
        
        for(int i=0;i<pattern.size();i++)
        {
            if(mpp.find(pattern[i])!=mpp.end())
            {
                if(mpp[pattern[i]]!=v[i])
                    return false;
            }
            else
            {
                if(st.count(v[i])>0)
                    return false;
                mpp[pattern[i]]=v[i];
                st.insert(v[i]);
            }
        }
        return true;
        
        
    }
};
