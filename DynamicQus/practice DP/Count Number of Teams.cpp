https://leetcode.com/problems/count-number-of-teams/
class Solution {
public:
    int numTeams(vector<int>& rat) {
        int n=rat.size();
        int res=0;
            for(int i=0;i<n-1;i++)
            {
                int ll=0,ls=0,rl=0,rs=0;
               for(int j=0;j<i;j++)
               {
                   if(rat[j]<rat[i])
                       ls++;
                   else
                       ll++;
                       
               }
               for(int j=i+1;j<n;j++)
               {
                   if(rat[j]<rat[i])
                       rs++;
                   else
                       rl++;
               }
                res+=ls*rl+rs*ll;
            }
        return res;
    }
};
