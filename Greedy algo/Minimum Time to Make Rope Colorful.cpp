https://leetcode.com/problems/minimum-time-to-make-rope-colorful/
class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int res=0;
        for(int i=0;i<colors.size();i)
        {
            int j=i;
            int max_ind=i;
            int mx=neededTime[i];
            while(j<colors.size() && colors[i]==colors[j]){
                if(neededTime[j]>mx){
                    max_ind=j;
                    mx= neededTime[j];
                }
                j++;
                
            }
            int sum=0;
            for(int k=i;k<j;k++){
                if(k!=max_ind)
                    sum+=neededTime[k];
                
            }
            res+=sum;
            i=j;
            
        }
        return res;
    }
};
