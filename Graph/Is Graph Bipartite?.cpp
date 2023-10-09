// https://leetcode.com/problems/is-graph-bipartite/description/
class Solution {
public:
    bool bfs(int n1, vector<vector<int>>graph, vector<int>&col)
    {
        queue<int>q;
        q.push(n1);
        col[n1]=1;
        while(!q.empty())
        {
            auto node = q.front();
            q.pop();
            for(auto it:graph[node])
            {
                if(col[it]==-1)
                {
                    col[it]=1-col[node];
                    q.push(it);

                }
                else if(col[it]==col[node])
                {
                    return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
         int v = graph.size();
         
         vector<int> col(v, -1);
         for(int i=0;i<v;i++)
         {
             if(col[i]==-1)
             {
                 if(bfs(i,graph,col)==false)
                 {
                     return false;
                 }
             }
         }
         return true;
        
    }
};
