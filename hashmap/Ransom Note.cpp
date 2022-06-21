class Solution {
public:
    bool canConstruct(string r, string m) {
        unordered_map<char,int>mpp;
        bool f=false;
        for(int i=0;i<m.size();i++)
        {
            mpp[m[i]]++;
        }
        
        for(int i=0;i<r.size();i++)
        { 
            f=false;
            if(mpp.find(r[i])!=mpp.end())
            {
                if(mpp[r[i]]>0)
                {
                    mpp[r[i]]--;
                    f=true;
                }
            }
            if(f==false)
            return false;
        }
        
      return true;  
        
    }
};
