class Solution {
public:
    string minWindow(string s, string t) {
      string ans="";
        if(s.size()<t.size())
            return "";
        unordered_map<char,int>mpp;
        for(int i=0;i<t.size();i++)
        {
            mpp[t[i]]++;
        }
        int i=0,j=0,len=INT_MAX;
        int count=mpp.size();
        while(j<s.size())
        {
            if(mpp.find(s[j])!=mpp.end())
            {
                mpp[s[j]]--;
                if(mpp[s[j]]==0)
                    count--;
            }
            if(count>0)
                j++;
            else if(count==0)
            {
                while(count==0)
                {
                    if(mpp.find(s[i])!=mpp.end())
                    {
                        if(j-i+1<len)
                        {
                        len=j-i+1;
                        ans=s.substr(i,j-i+1);
                        
                        }
                    
                    mpp[s[i]]++;
                    if(mpp[s[i]]>0)count++;
                        
                        
                }
                i++;
            }
                j++;
        }
        }
        return ans;
    }
};
