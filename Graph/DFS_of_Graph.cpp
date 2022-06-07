class solution{ 
void dfsfun(int node,vector<int>&vis,vector<int>adj[],vector<int>&dfs)
    {
        dfs.push_back(node);
        vis[node]=1;
        for(auto it: adj[node])
        {
            if(!vis[it])
            {
                dfsfun(it,vis,adj,dfs);
            }
        }
    }
public:    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int>dfs;
        vector<int>vis(V,0);
        //vis[0]=1;
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                dfsfun(i,vis,adj,dfs);
            }
        }
        return dfs;
    }
};
