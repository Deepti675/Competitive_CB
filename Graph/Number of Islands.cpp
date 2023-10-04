// https://leetcode.com/problems/number-of-islands/description/
// using DFS
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count =0;
        for(int i=0; i < n; i++)
        {
            for(int j=0; j < m ;j++)
            {
                if(grid[i][j] == '1')
                {
                    count++;
                    eraseIslands(grid,i,j);
                    
                }
            }
        }
        return count;
    }
private:
    void eraseIslands( vector<vector<char>>& grid, int i, int j){
        int n= grid.size(), m = grid[0].size();   
        if(i < 0 || i == n || j < 0 || j == m || grid[i][j] == '0'){
                return;
            }
            grid[i][j]='0';
            eraseIslands(grid, i - 1, j);
            eraseIslands(grid, i + 1, j);
            eraseIslands(grid, i, j - 1);
            eraseIslands(grid, i, j + 1);   
    }

};

