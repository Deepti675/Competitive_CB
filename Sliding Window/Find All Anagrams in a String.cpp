class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>mpp;
        vector<int>v;
       
        for(auto it:p)
            mpp[it]++;
        int c=mpp.size();
        int i=0,j=0;
        int k=p.size();
        while(j<s.size())
        {
            //calculation
            if(mpp.find(s[j])!=mpp.end())
            {
                mpp[s[j]]--;
                if(mpp[s[j]]==0)
                    c--;
            }
            if(j-i+1<k)
                j++;
            else if(j-i+1==k)
            {
                //ans calculation
                if(c==0)
                {
                    v.push_back(i);
                   

                }
             if(mpp.find(s[i])!=mpp.end())
            {
                mpp[s[i]]++;
                if(mpp[s[i]]==1)
                    c++;

            }
             
            i++;
            j++;
        }
        
            
    }
        return v;
    }
};
