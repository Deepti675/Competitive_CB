https://leetcode.com/problems/number-of-submatrices-that-sum-to-target/
class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& mat, int target) {
        int n=mat.size();
        int m=mat[0].size();
        int ans=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            for(int j=1;j<m;j++)
                mat[i][j]+=mat[i][j-1];
        }
        for(int s=0;s<m;s++){
            for(int e=s;e<m;e++){
                mp.clear();
                mp[0]++;
                int sum=0;
                for(int i=0;i<n;i++){
                    int curr=mat[i][e];
                    if(s>0)
                        
                        curr-=mat[i][s-1];//doubt
                    sum+=curr;
                    ans+=mp[sum-target];
                    mp[sum]++;
                }
            }
        }
       return ans; 
    }
};
