https://leetcode.com/problems/goal-parser-interpretation/
class Solution {
public:
    string interpret(string command) {
        string res;
        for(int i=0;i<command.size();i++){
            if(command[i]=='G')
                res.push_back('G');
            if(command[i]=='(' && command[i+1]==')')
                res.push_back('o');
            if(command[i]='a'&& command[i+1]=='l'){
                res.push_back('a');
                res.push_back('l');
            }
        }
        return res;
    }
};
