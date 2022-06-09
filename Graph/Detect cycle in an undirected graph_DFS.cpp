class Solution{ 
public:
    // Function to detect cycle in an undirected graph.
    bool cycleDFS(int node,int par,vector<int>&vis,vector<int>adj[])
    {
        vis[node]=1;
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
               if(cycleDFS(it,node,vis,adj))
               return true;
            }
            else if(par!=it)return true;   
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int>vis(V+1,0);
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                if(cycleDFS(i,-1,vis,adj))
                return true;
            }
        }
        return false;
       }
};
