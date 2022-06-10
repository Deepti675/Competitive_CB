class solution{
	public:
	void find_Topo(int node,vector<int>&vis,stack<int>&s,vector<int>adj[])
	{
	    vis[node]=1;
	    for(auto it:adj[node])
	    {
	        if(!vis[it])
	           find_Topo(it,vis,s,adj);
	    }
	    s.push(node);
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    stack<int>s;
	    vector<int>vis(V,0);
	    for(int i=0;i<V;i++)
	    {
	        if(vis[i]==0)
	           find_Topo(i,vis,s,adj);
	    }
	    vector<int>res;
	    while(!s.empty())
	    {
	        res.push_back(s.top());
	        s.pop();
	    }
	    return res;
	}
};
