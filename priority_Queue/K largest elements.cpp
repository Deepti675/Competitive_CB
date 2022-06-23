//https://practice.geeksforgeeks.org/problems/k-largest-elements3736/1#
class Solution
{
    public:
    //Function to return k largest elements from an array.
    struct compare{ 
        bool operator()(int const &i,int const &j)
        {
            return i>j;
        }
    };
    vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        priority_queue<int,vector<int>,greater<int>>pq;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
             pq.push(arr[i]);
             if(pq.size()>k)
             {
                
                 pq.pop();
             }
        }
        while(pq.size()>0)
        {
            v.push_back(pq.top());
            pq.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
