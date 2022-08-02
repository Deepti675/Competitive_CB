https://leetcode.com/problems/palindrome-partitioning/
//recursion
class Solution {
public:
    bool isPal(string s,int start,int end){
        while(start<=end){
            if(s[start++]!=s[end--])
                return false;
        }
        return true;
    }
    void f(int ind,string s,vector<string>&v,vector<vector<string>>&ans){
        if(ind==s.size()){
            ans.push_back(v);
            return;
        }
        for(int i=ind;i<s.size();i++)
        {
            if(isPal(s,ind,i))
            {
                v.push_back(s.substr(ind,i-ind+1));
                f(i+1,s,v,ans);
                v.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
       vector<vector<string>>ans;
       vector<string>v;
        f(0,s,v,ans);
        return ans;
       
    }
};
