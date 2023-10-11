// https://leetcode.com/problems/find-eventual-safe-states/description/
class Solution {
private:
bool dfs(int node,vector<vector<int>>&g, vector<int>&vis,vector<int>&pathvis,vector<int>&check )
    {
        vis[node]=1;
        pathvis[node]=1;
        check[node]=0;
        for(auto it: g[node])
        {
            if(!vis[it])
            {
                if(dfs(it,g,vis,pathvis,check)==true)
                {
                    check[node]=0;
                    return true;
                }
            }
            else if(pathvis[it])
            {
                check[node]=0;
                return true;
            }

        }
        check[node]=1;
        pathvis[node]=0;
        return false;
    }
public:
    
    vector<int> eventualSafeNodes(vector<vector<int>>& g) {
        int V = g.size();
        vector<int>vis(V,0);
        vector<int>pathvis(V,0);
        vector<int>check(V,-1);
        vector<int>adj[V];
        vector<int>safenode;
        
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                dfs(i,g,vis,pathvis,check);
            }

        }
        for(int i=0;i<V;i++)
        {
            if(check[i]==1)safenode.push_back(i);
        }
        return safenode;
    }
};        
