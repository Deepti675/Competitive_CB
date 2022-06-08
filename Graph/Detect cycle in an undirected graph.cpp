class Solution{
bool helper(int n,int V,vector<bool>&vis,vector<int>adj[])
    {
        queue<pair<int,int>>q;
        vis[n]=true;
        q.push({n,-1});
        while(!q.empty())
        {
            int node=q.front().first;
            int par=q.front().second;
            q.pop();
            for(auto i:adj[node])
            {
                if(!vis[i])
                {
                    vis[i]=true;
                    q.push({i,node});
                    
                }
                else if(par!=i)
                  return true;
            } 
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
       vector<bool>vis(V,false);
       for(int i=0;i<V;i++)
       {
           if(!vis[i]&&helper(i,V,vis,adj))
           return true;
       }
       return false;
    }
};
