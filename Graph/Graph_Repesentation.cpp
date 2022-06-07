//Graph representation in ajecency matrix
#include <iostream>

using namespace std;

int main()
{
    int n,m;
    //n=nodes
    //m=edges
    cin>>n>>m;
    int adjmat[n+1][m+1];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adjmat[u][v]=1;
        adjmat[v][u]=1;
    }

    return 0;
}
//Graph reperesatation in adjecency list

#include <iostream>

using namespace std;

int main()
{
    int n,m;
    //n=nodes
    //m=edges
    cin>>n>>m;
    vector<int>adjlist[n+1];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }

    return 0;
}
//For weighted graph

#include <iostream>

using namespace std;

int main()
{
    int n,m;
    //n=nodes
    //m=edges
    cin>>n>>m;
    vector<pair<int,int>>adjlist[n+1];
    for(int i=0;i<m;i++)
    {
        int u,v,wt;
        cin>>u>>v>>wt;
        adjlist[u].push_back({v,wt});
        adjlist[v].push_back({u,wt});
    }

    return 0;
}

