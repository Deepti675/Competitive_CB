class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>mpp1;
        set<char>mpp2;
        if(s.length()!=t.length())
            return false;
        for(int i=0;i<s.length();i++)
        {
            if(mpp1.count(s[i])==0&&mpp2.count(t[i])==0)
            {
                mpp1[s[i]]=t[i];
                mpp2.insert(t[i]);
            }
            else if(mpp1.count(s[i])==0&&mpp2.count(t[i]))
                return false;
            else if(mpp1[s[i]]!=t[i])
                return false;
        }
        return true;
    }
};
