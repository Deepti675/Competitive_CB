https://leetcode.com/problems/where-will-the-ball-fall/
class Solution {
public:
    int depth_first_search(int i,int j,vector<vector<int>>&grid)
    {
        if(i>=grid.size())
        {
            return j;
        }
        if(grid[i][j]==1 && j+1<grid[0].size() && grid[i][j+1]==1)
        {
            return depth_first_search(i+1,j+1,grid);
        }
        else if(grid[i][j]==-1 && j-1>=0 && grid[i][j-1]==-1)
        {
            return depth_first_search(i+1,j-1,grid);
        }
        else if(grid[i][j]==1 && j+1>grid[0].size())
        {
            return -1;
        }
        else
            return -1;
    }
    vector<int> findBall(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        vector<int>ans(m);
        for(int i=0;i<m;i++)
        {
            ans[i]=depth_first_search(0,i,grid);
        }
        return ans;
    }
};
