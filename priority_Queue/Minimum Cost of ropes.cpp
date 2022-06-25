//https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1#
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        
        
        priority_queue<long long,vector<long long>,greater<long long>>p(arr,arr+n);
        long long cost=0;
        while(p.size()>1)
        {
            long long f=p.top();
            p.pop();
            long long s=p.top();
            p.pop();
            cost=cost+f+s;
            p.push(f+s);
        }
        return cost;
    }
};
