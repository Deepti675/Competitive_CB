//https://leetcode.com/problems/matchsticks-to-square/
class Solution {
public:
    bool helper(vector<int>&ms,int i,vector<int>& v){
        if(i==ms.size())
        {    
            if(v[0]==0&&v[1]==0&&v[2]==0&&v[3]==0)
                return true;
        else
            return false;
        }    
        
        for(int j=0;j<4;j++)
        {
            if(ms[i]>v[j])continue;
            v[j]-=ms[i];
            if(helper(ms,i+1,v))
            return true;
            v[j]+=ms[i];
        }
        return false;
    }
    bool makesquare(vector<int>& ms) {
        int n=ms.size();
        
        if(n<4)return false;
        
        int sum=0;
        for(int it:ms)
            sum+=it;
        
        if(sum%4!=0)return false;
        
        vector<int>v(4,sum/4);
        
         sort(ms.begin(),ms.end(),greater<int>());
       
        return helper(ms,0,v);
    }
};
