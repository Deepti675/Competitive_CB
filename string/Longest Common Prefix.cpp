https://leetcode.com/problems/longest-common-prefix/
class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        int n=str.size();
        sort(str.begin(),str.end());
        string ans="";
        string a=str[0];
        string b=str[n-1];
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i])
            {
                ans+=a[i];
            }
            else
                break;
        }
        return ans;
    }
};
