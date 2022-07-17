https://leetcode.com/problems/k-inverse-pairs-array/
class Solution {
public:
    
    int kInversePairs(int n, int k) {
             int dp[1001][1001] = {}; 

        dp[0][0] =1;
        
        for(int i=1 ; i<=n; ++i){ 
            long long int cs = 0; 
            for(int j =0; j<=k; ++j){
                cs+=dp[i-1][j]; 
                
                if(j>=i){
                    cs-=dp[i-1][j-i];
                }
            dp[i][j] = ((long long)dp[i][j] + cs)%1000000007;             
                
                
            }
        }
        return dp[n][k]; 

    }
};
