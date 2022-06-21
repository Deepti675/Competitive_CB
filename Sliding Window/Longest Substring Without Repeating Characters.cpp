//https://leetcode.com/problems/longest-substring-without-repeating-characters/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
           int maxi=0,i=0,j=0;
           unordered_map<char,int>mpp;
           while(j<s.length())
           {
               mpp[s[j]]++;
               if(mpp.size()==j-i+1)
               {
                   maxi=max(maxi,j-i+1);
                   
               }
               else if(mpp.size()<j-i+1)
               {
                   while(mpp.size()<j-i+1)
                   {
                       mpp[s[i]]--;
                       if(mpp[s[i]]==0)
                           mpp.erase(s[i]);
                       i++;
                   }        
               }
               j++;
           }
        return maxi;
    }
};
