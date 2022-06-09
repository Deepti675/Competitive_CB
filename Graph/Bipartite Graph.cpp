class Solution{
public:
    bool check(int n1,vector<int>adj[],int col[])
    {
        queue<int>q;
        q.push(n1);
        col[n1]=1;
        while(!q.empty())
        {
            int node= q.front();
            q.pop();
            for(auto it:adj[node])
            {
                if(col[it]==-1)
                {
                    col[it]=1-col[node];
                    q.push(it);
                }
                else if(col[it]==col[node])
                   return false;
            }
        }
        return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    int col[V];
	    memset(col,-1,sizeof col);
	    for(int i=0;i<V;i++)
	    {
	        if(col[i]==-1)
	        {
	            if(!check(i,adj,col))
	            return false;
	        }
	    }
	    return true;
	    
	}

};
