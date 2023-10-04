// https://leetcode.com/problems/number-of-provinces/description/
class Solution {
private:
    void dfs(int node, vector<int>&vis,vector<int>adjls[])
    {
        vis[node]=1;
        for(auto it: adjls[node])
        {
            if(!vis[it])
            {
                dfs(it,vis,adjls);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int count=0;
        int V = isConnected.size(); 
        vector<int>adjls[V];
        vector<int>vis(V,0);
        for(int i=0;i<V;i++)
        {
            for(int j=0;j<V;j++)
            {
                if(isConnected[i][j]==1 && i!=j)
                {
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                
                dfs(i,vis,adjls);
                count++;
            }
        }
        return count;
    }
};
