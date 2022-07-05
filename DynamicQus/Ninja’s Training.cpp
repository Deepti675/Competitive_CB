// /https://www.codingninjas.com/codestudio/problems/ninja-s-training_3621003?leftPanelTab=0
int fun(int day,int last,vector<vector<int>>&points,vector<vector<int>>&dp)
{
    // int point;
    if(day==0)
    {
        int maxi=0;
        for(int i=0;i<3;i++)
        {
            if(i!=last)
                maxi=max(maxi,points[0][i]);
        }
        return maxi;
    }
    if(dp[day][last]!=-1)return dp[day][last];
    int maxi=0;
    for(int i=0;i<3;i++)
    {
        if(i!=last)
        {
            int point=points[day][i]+fun(day-1,i,points,dp);
        maxi=max(maxi,point);
        }
    }
    return dp[day][last]=maxi;
}
int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    vector<vector<int>>dp(n,vector<int>(4,-1));
    return fun(n-1,3,points,dp);
}
//tabulation 
//bootom up approch
int ninjaTraining(int n, vector<vector<int>> &poi)
{
  vector<vector<int>>dp(n,vector<int>(4,0));
    dp[0][0]=max(poi[0][1],poi[0][2]);
    dp[0][1]=max(poi[0][0],poi[0][2]);
    dp[0][2]=max(poi[0][0],poi[0][1]);
    dp[0][3]=max(poi[0][0],max(poi[0][2],poi[0][1]));
    for(int day=1;day<n;day++)
    {
        for(int last=0;last<4;last++)
        {
            dp[day][last]=0;
            for(int task=0;task<3;task++)
            {
                if(task!=last){
                    int point=poi[day][task]+dp[day-1][task];
                    dp[day][last]=max(dp[day][last],point);
                }
            }
        }
    }
    return dp[n-1][3];
}
