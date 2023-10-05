// https://leetcode.com/problems/island-perimeter/description/

class Solution {
public:
void dfs(int row,int col,vector<vector<int>>&vis,vector<vector<int>>& grid,int& cnt){
    vis[row][col]=1;
    int a=0;
    int drow[4]={1,-1,0,0};
    int dcol[4]={0,0,1,-1};
    for(int i=0;i<4;i++){
          int nrow=row+drow[i];
          int ncol=col+dcol[i];
          if(nrow>=0 && ncol>=0 && nrow<grid.size() && ncol<grid[0].size() && grid[nrow][ncol]==1){
              a++;
          }
          if(nrow>=0 && ncol>=0 && nrow<grid.size() && ncol<grid[0].size() && grid[nrow][ncol]==1&& vis[nrow][ncol]==0 ){
          
              dfs(nrow,ncol,vis,grid,cnt);
          }

          
    }
    cnt+=4-a;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),0));
        int cnt=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(!vis[i][j] && grid[i][j]==1)
                       dfs(i,j,vis,grid,cnt);
            }
        }
        return cnt;
    }
};
