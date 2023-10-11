// https://leetcode.com/problems/course-schedule/description/
class Solution {
public:
    bool canFinish(int nc, vector<vector<int>>& pre) {

        vector<int>adj[nc];
        vector<int>indegree(nc,0);
        queue<int>q;
        for(auto it: pre)
        {
            adj[it[1]].push_back(it[0]);
        }
        for(int i=0;i<nc;i++)
        {
            for(auto it:adj[i])
            {
                indegree[it]++;
            }
        }
        for(int i=0;i<nc;i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }
        int cnt=0;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            cnt++;
            for(auto it:adj[node])
            {
                indegree[it]--;
                if(indegree[it]==0)q.push(it);
            }
        }
        if(cnt==nc)return true;
        return false;
    }
};
