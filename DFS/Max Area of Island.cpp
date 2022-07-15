https://leetcode.com/problems/max-area-of-island/
class Solution {
public:
    int fun(vector<vector<int>>& grid,int r,int c){
        if(r<0||c<0|| r==grid.size()|| c==grid[r].size()||grid[r][c]==0)return 0;
        grid[r][c]=0;
        return 1+fun(grid,r-1,c)+fun(grid,r+1,c)+fun(grid,r,c+1)+fun(grid,r,c-1);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int res=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j])
                    res=max(res,fun(grid,i,j));
            }
        }
        return res;
    }
};
