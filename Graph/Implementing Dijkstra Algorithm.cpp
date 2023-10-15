// https://practice.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        vector<int>dist(V);
        for(int i=0;i<V;i++)dist[i]=1e9;
        dist[S]=0;
        pq.push({0,S});
        // similler like BFS
        while(!pq.empty()){
            int dis = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            for(auto it: adj[node]){
                int edgewt = it[1];
                int adjnode = it[0];
                if(dis+edgewt < dist[adjnode]){
                    dist[adjnode] = dis + edgewt;
                    pq.push({dist[adjnode],adjnode});
                }
            }
        }
        return dist;
    }
};




//  Using set 

class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
       set<pair<int,int>>st;
       vector<int>dist(V,1e9);
       st.insert({0,S});
       dist[S]=0;
       while(!st.empty())
       {
            auto it = *(st.begin());
            int node = it.second;
            int dis = it.first;
            st.erase(it);
            for(auto it : adj[node])
            {
                 int adjnode = it[0];
                 int edgewt = it[1];
                 if (dis + edgewt <dist[adjnode]){
                    if(dist[adjnode]!=1e9)
                        st.erase({dist[adjnode],adjnode});
                    dist[adjnode] = dis+edgewt;
                    st.insert({dist[adjnode],adjnode});
                 }
            }
       }
       return dist;
    }
};

