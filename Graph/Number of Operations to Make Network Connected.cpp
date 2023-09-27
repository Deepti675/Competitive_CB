// https://leetcode.com/problems/number-of-operations-to-make-network-connected/description/
class Solution {

void dfs(int node, vector<int>&vis,vector<int>adj[])
{
    vis[node]=1;
    for(auto it: adj[node] )
    {
        if(!vis[it])
        {
            dfs(it, vis,adj);
        }
    }
}
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1)
        return -1;
        //visited array
        int count=0;
        vector<int>adj[n];
        for(auto it: connections)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);            
        }
        vector<int>vis(n,0);
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfs(i,vis,adj);
                count++;
            }
            
        }
        return count-1;
    }
};
