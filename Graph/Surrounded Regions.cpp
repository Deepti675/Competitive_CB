// https://leetcode.com/problems/surrounded-regions/description/
class Solution {
private:
    void dfs(int row, int col, vector<vector<int>>&vis,vector<vector<char>>&board)
    {
        int n = board.size();
        int m = board[0].size(); 
        int delrow[] ={-1,0,1,0};
        int delcol[] ={0,1,0,-1};
        vis[row][col]=1;
        for(int i=0;i<4;i++)
        {
            int nrow = row+delrow[i];
            int ncol = col+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && board[nrow][ncol]=='O')
            {
                dfs(nrow,ncol,vis,board);
            } 
        }
    }
public:
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        //traversing the boundry
        // for traversing the first row you will have to go every column
        for(int j=0;j<m;j++)
        {
            if(!vis[0][j] && board[0][j]=='O')
            {
                dfs(0,j,vis,board);
            }
            if(!vis[n-1][j] && board[n-1][j]=='O')
            {
                dfs(n-1,j,vis,board);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(!vis[i][0] && board[i][0]=='O')
            {
                dfs(i,0,vis,board);
            }
            if(!vis[i][m-1] && board[i][m-1]=='O')
            {
                dfs(i,m-1,vis,board);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] && board[i][j] == 'O')
                {
                    board[i][j]='X';
                }
            }
        }
      
    }
};
