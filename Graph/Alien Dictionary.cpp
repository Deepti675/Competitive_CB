// https://practice.geeksforgeeks.org/problems/alien-dictionary/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
class Solution{
    private:
    vector<int> topoSort(int V, vector<int> adj[]) 
	{
	   
	    queue<int>q;
	    vector<int>indegree(V,0);
	    
	    for(int i=0;i<V;i++)
	    {
	       for(auto it:adj[i])
	       {
	           indegree[it]++;
	       }
	    }
	   for(int i=0;i<V;i++)
	   {
	       if(indegree[i]==0)
	          q.push(i);
	   }
	   vector<int>res;
	   while(!q.empty())
	   {
	       int node=q.front();
	       q.pop();
	       res.push_back(node);
	       for(auto it:adj[node])
	       {
	           indegree[it]--;
	           if(indegree[it]==0)
	             q.push(it);
	       }
	   }
	   return res;
	}
    public:
    string findOrder(string dict[], int N, int K) {
        //code here
        // alien dictionary order is like b d a c
        // question says something before something so we will apply topological sorting 
        vector<int>adj[K];
        for(int i=0;i<N-1;i++){
            string s1 = dict[i];
            string s2 = dict[i+1];
            int len = min(s1.size(),s2.size());
            for( int ptr = 0;ptr<len;ptr++){
                if(s1[ptr]!=s2[ptr]){
                adj[s1[ptr]-'a'].push_back(s2[ptr]-'a');
                break;
                }
            }
        }
    vector<int>topo = topoSort(K,adj);
    string ans ="";
    for(auto it: topo){
        ans=ans+char(it+'a');
        
    }
    return ans;
    }
};
