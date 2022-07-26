
#include <bits/stdc++.h>

using namespace std;
void buildTree(int *a,int s,int e,int *tree,int ind)
{
    if(s==e){
       tree[ind]=a[s];
       return;
    }  
    int mid=(s+e)/2;
    buildTree(a,s,mid,tree,2*ind);
    buildTree(a,mid+1,e,tree,2*ind+1);
    tree[ind]=min(tree[2*ind],tree[2*ind+1]);
    return;
}
int main()
{
    int a[]={1,3,2,-5,6,4};
    int n=sizeof(a)/sizeof(int);
    int * tree=new int [4*n+1];
    buildTree(a,0,n-1,tree,1);
    for(int i=1;i<=13;i++)
       cout<<tree[i]<<" ";

    return 0;
}
//segement tree output->  -5 1 -5 1 2 -5 4 1 3 0 0 -5 6   
