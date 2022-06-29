//https://leetcode.com/problems/set-matrix-zeroes/
class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        unordered_set<int>rs,cs;
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0)
                {
                if(rs.find(i)==rs.end())
                    rs.insert(i);
                if(cs.find(j)==cs.end())
                    cs.insert(j);
                }
            }
        }
        for(auto it=rs.begin();it!=rs.end();it++){
            int i=*it;
            for(int j=0;j<mat[i].size();j++)
                mat[i][j]=0;
        }
        for(auto it=cs.begin();it!=cs.end();it++){
            int j=*it;
            for(int i=0;i<mat.size();i++)
                mat[i][j]=0;
        }
            
    }
};
