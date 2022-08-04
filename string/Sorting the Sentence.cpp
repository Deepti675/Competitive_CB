https://leetcode.com/problems/sorting-the-sentence/
class Solution {
public:
    string sortSentence(string s) {
        string s1,res;
        vector<string>v(10);//because it is givem number from 1 to 9
        for(int i=0;i<s.size();i++){
            if(s[i]>=48 && s[i]<=57){
                v[s[i]-48]=s1+" ";
                s1="";
                i++;//skiping the space
            }
            else
                s1+=s[i];
        }
        for(string it:v){
            res+=it;
        }
        res.pop_back();
        return res;
    }
};
