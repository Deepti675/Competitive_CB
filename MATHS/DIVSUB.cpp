//QUS LINK --> https://www.codechef.com/problems/DIVSUBS
#include<bits/stdc++.h>

using namespace std;
void find(){
     int n;
        cin>>n;
        vector<int> a(n+1),b(n,-1);
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        int sum=0;
        b[0]=0;
        for(int i=1; i<=n; i++)
        {
            sum=(sum+a[i])%n;
            if(b[sum]!=-1)
            {
                cout<<i-b[sum]<<'\n';
                for(int j=b[sum]+1;j<=i;j++)
                {
                    cout<<j<<' ';
                }
                cout<<'\n';
                return ;
            }
            b[sum]=i;
        }
        cout<<-1<<endl;
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     find();  
    }
    return 0;
}
