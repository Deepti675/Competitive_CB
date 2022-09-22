https://leetcode.com/problems/reverse-string-ii/
class Solution {
public:
    string reverseStr(string s, int k) {
        //stringstream ss(s);
        for(int i=0;i<s.length();i+=2*k){
            if(i+k>=s.length())
                reverse(s.begin()+i,s.end());
            else
                reverse(s.begin()+i,s.begin()+k+i);
        }
        return s;
    }
};
