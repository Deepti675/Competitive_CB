//https://leetcode.com/problems/construct-target-array-with-multiple-sums/
class Solution {
public:
    bool isPossible(vector<int>& tar) {
        priority_queue<long>pq;
        long sum=0;
        for(int i=0;i<tar.size();i++)
        {
            pq.push(tar[i]);
            sum+=tar[i];
        }
        while(pq.top()!=1)
        {
            long tt=pq.top();
            pq.pop();
            sum-=tt;
            if(sum<=0||sum>=tt)
               return false;
            
            tt=tt%sum;
        
            sum+=tt;
            pq.push(tt>0?tt:sum);
            
            
        }
        return true;
    }
};
