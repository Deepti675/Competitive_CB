https://www.codingninjas.com/codestudio/problems/problem-name-boolean-evaluation_1214650?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0
//memoization
int mod= (int)(1e9)+7;
long long f(int i, int j,int isTrue, string &exp, vector<vector<vector<int>>>& dp){
    if(i==j){
        if(isTrue) return exp[i]=='T';
        return exp[i]=='F';
    }
    if(dp[i][j][isTrue]!=-1) return dp[i][j][isTrue];
    
    long long cnt=0;    
    for(int k=i+1; k<j; k=k+2){
        long long lt= f(i,k-1,1,exp,dp);
        long long lf= f(i,k-1,0,exp,dp);
        long long rt= f(k+1,j,1,exp,dp);
        long long rf= f(k+1,j,0,exp,dp);
        if(exp[k]=='&'){
            if(isTrue){
                cnt= (cnt+ (lt* rt)%mod)%mod;
            }else cnt= (cnt +(lt*rf)%mod + (rt* lf)%mod + (lf* rf)%mod)%mod;
        }
        else if(exp[k]=='|'){
            if(isTrue){
                cnt=(cnt + (lt* rt)%mod + (lt * rf)%mod + (rt* lf)%mod)%mod;
            }else cnt= (cnt + (lf* rf)%mod)%mod;
        }
        else{
            if(isTrue){
                cnt= (cnt + (lf*rt)%mod + (rf* lt)%mod)%mod;
            } else cnt=(cnt + (lf* rf)%mod + (lt * rt)%mod)%mod;
        }
    }
    return dp[i][j][isTrue]=cnt%mod;
}


int evaluateExp(string & exp) {
    int n=exp.length();
        vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(n+1,vector<int>(2,-1)));

    return f(0,n-1,1,exp,dp);
}
//tabulation
#define ll long long int
ll mod=1000000007;
int evaluateExp(string & exp) {
    int n=exp.length();
    vector<vector<vector<int>>> dp(n,vector<vector<int>>(n,vector<int>(2,0)));
    for(int i=n-1;i>=0;i--)
    {
        for(int j=i;j<n;j++)
        {
            if(i==j)
            {
                dp[i][j][0]=(exp[i]=='F');
                dp[i][j][1]=(exp[i]=='T');
            }
            else 
            {
                ll ways=0;
                for(ll ind=i+1;ind<=j-1;ind+=2)
                {
                    ll lt=dp[i][ind-1][1]%mod;
                    ll rt=dp[ind+1][j][1]%mod;
                    ll lf=dp[i][ind-1][0]%mod;
                    ll rf=dp[ind+1][j][0]%mod;
                    if(exp[ind]=='&')
                    {
                        dp[i][j][0]=(dp[i][j][0]+(lt*rf+lf*rt+lf*rf))%mod;
                        dp[i][j][1]=(dp[i][j][1]+(lt*rt))%mod;
                    }
                    else if(exp[ind]=='|')
                    {
                        dp[i][j][0]=(dp[i][j][0]+(lf*rf))%mod;
                        dp[i][j][1]=(dp[i][j][1]+(lt*rf+lf*rt+lt*rt))%mod;
                    }
                    else
                    {
                        dp[i][j][0]=(dp[i][j][0]+(lt*rt+lf*rf))%mod;
                        dp[i][j][1]=(dp[i][j][1]+(lt*rf+lf*rt))%mod;
                    }
                }
            }
        }
    }
    return dp[0][n-1][1];
}
