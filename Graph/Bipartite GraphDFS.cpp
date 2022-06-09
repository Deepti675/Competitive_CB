class Solution{  
bool check(int n1,vector<int>adj[],int col[])
    {
       if(col[n1]==-1)
           col[n1]=1;
        for(auto it:adj[n1])
        {
            if(col[it]==-1){
               col[it]=1-col[n1];
            if(!check(it,adj,col))
              return false;
            }      
            else if(col[it]==col[n1])return false;  
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
