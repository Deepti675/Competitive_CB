class solution{ 
public:
    // Function to detect cycle in a directed graph.
    bool check(int node,vector<int>adj[],int vis[],int dfsvis[])
    {
        vis[node]=1;
        dfsvis[node]=1;
        for(auto it: adj[node])
        {
            if(!vis[it])
            {
                if(check(it,adj,vis,dfsvis))return true;
            }
            else if(dfsvis[it])return true;
        }
        dfsvis[node]=0;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        int vis[V];
        int dfsvis[V];
        memset(vis,0,sizeof vis);
        memset(dfsvis,0,sizeof dfsvis);
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                if(check(i,adj,vis,dfsvis))
                return true;
            }
        }
        return false;
    }
};
