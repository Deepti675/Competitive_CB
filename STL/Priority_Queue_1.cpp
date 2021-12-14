#include<bits/stdc++.h>
using namespace std;
int main()
{
    //preority queue (implemented as a heap)
    //push -->O(log(n))
    //pop -->O(log(n))
    //top -->O(1)
    //empty
    //by default this heap follow the property of max heap
    priority_queue<int>pq;//max priority queue
    //insert elements
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int no;
        cin>>no;
        pq.push(no); 
    }
    //remove the element from the heap
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    //min heap
    //we can change the max heap to min by passing some parameter so it can change the priority in heap
    priority_queue<int,vector<int>,greater<int>>pqmin;//min priority queue
    int n1;
    cin>>n1;
    for(int i=0;i<n1;i++)
    {
        int num;
        cin>>num;
        pqmin.push(num);
    }
    while(!pqmin.empty())
    {
        cout<<pqmin.top()<<" ";
        pqmin.pop();
    }
    
     return 0;   
}













