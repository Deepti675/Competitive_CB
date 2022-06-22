//https://leetcode.com/problems/longest-palindrome/
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mpp;
        int m,c=0;
        for(int i=0;i<s.size();i++)
        {
            mpp[s[i]]++;
        }
        bool chk=false;
        for(auto it: mpp)
        {
            if(it.second%2)
                chk=true;
            it.second-=it.second%2;
            c+=it.second;
        }
        if(chk)
            return c+1;
        else
        return c; 
    }
};
