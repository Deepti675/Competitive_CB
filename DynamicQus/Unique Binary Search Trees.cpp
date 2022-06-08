class Solution {
public:
    int numTrees(int n) {
       // int n;
    //cin>>n;
    vector<int>c(n+1,0);
    c[0]=c[1]=1;
        int sum;
    for(int i=2;i<=n;i++)
    {
        sum=0;
        for(int j=1;j<=i;j++)
        {
        sum+=c[j-1]*c[i-j];
        }
        c[i]=sum;
    }
        
    return c[n];
    }
};
