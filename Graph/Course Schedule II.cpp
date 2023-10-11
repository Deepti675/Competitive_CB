// https://leetcode.com/problems/course-schedule-ii/description/
class Solution {
public:
    
    vector<int> findOrder(int nc, vector<vector<int>>& pre) {
        vector<int>adj[nc];
        queue<int>q;
        vector<int>res,empty;
        for(auto it: pre)
        {
            adj[it[1]].push_back(it[0]);
        }
        vector<int>indegree(nc,0);
        for(int i=0;i<nc;i++)
        {
            for(auto it: adj[i])
            {
                indegree[it]++;
            }
        }
        for(int i =0 ;i<nc;i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }
       
       while(!q.empty())
       {
           int node = q.front();
           q.pop();
           res.push_back(node);
          
           for(auto it: adj[node]){
               indegree[it]--;
               if(indegree[it]==0)q.push(it);
           }
       } 
       if(res.size()!=nc)
       return empty;

    return res;
    }
};
