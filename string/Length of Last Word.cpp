https://leetcode.com/problems/length-of-last-word/
class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0,i;
        for(i=s.size()-1;i>=0;i--){
            if(s[i]!=' ')
                break;
        }
        while(i>=0 && s[i]!=' '){
            c++;
            i--;
        }
        return c;
    }
};
