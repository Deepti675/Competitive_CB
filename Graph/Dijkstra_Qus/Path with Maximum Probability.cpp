// https://leetcode.com/problems/path-with-maximum-probability/
class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        vector<pair<int,double>>adj[n];
        int m = edges.size();
        for(int i =0 ;i<m; i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            double p = succProb[i];
            adj[u].push_back({v,p});
            adj[v].push_back({u,p});
        }
        priority_queue<pair<double,int>> pq;
        vector<double>prob(n,0);
        pq.push({1.0,start_node});
        prob[start_node] = 1;
        while(!pq.empty()){
            auto currprob = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            if(node == end_node) return currprob;
            for(auto &it : adj[node]){
                double p = it.second;
                int adjnode = it.first;
                if(prob[adjnode]<p*currprob){
                    prob[adjnode] = p*currprob;
                    pq.push({p*currprob,adjnode});
                }

            }
        }
   return 0;
    }
};
