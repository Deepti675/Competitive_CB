//https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1/
class Solution
{
public:
    int longestKSubstr(string s, int k) {
    // your code here
    unordered_map<char,int>mpp;
    
    mpp.clear();
    int maxi=-1;
    int i=0,j=0;
    while(j<s.length())
    {
        mpp[s[j]]++;
        if(k>s.length())
        {
            return -1;
        }
        if(mpp.size()<k)
        {
            j++;
        }
        
        else if(mpp.size()==k)
        {
            maxi=max(maxi,j-i+1);
            j++;
        }
        else if(mpp.size()>k)
        {
            while(mpp.size()>k)
            {
            mpp[s[i]]--;
            if(mpp[s[i]]==0)
            mpp.erase(s[i]);
            i++;
           
            }
            j++;
        }
        
    }
    return maxi;
    }
};
