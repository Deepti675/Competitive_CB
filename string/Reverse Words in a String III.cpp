https://leetcode.com/problems/reverse-words-in-a-string-iii/
class Solution {
public:
    string reverseWords(string s) {
        
        
        
        string k="",t;
         
        stringstream st(s);
        while(getline(st,t,' ')){
            reverse(t.begin(),t.end());
            k+=t+' ';
        }
        
        return k.substr(0,(k.size()-1));
    }
};
