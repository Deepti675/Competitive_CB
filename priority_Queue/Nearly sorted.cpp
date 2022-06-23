//https://practice.geeksforgeeks.org/problems/nearly-sorted-1587115620/1/#
class Solution
{
    public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int num, int k){
        // Your code here
        priority_queue<int,vector<int>,greater<int>>pq(arr,arr+k+1);
        vector<int>v;
        for(int i=k+1;i<num;i++)
        {
           // pq.push(arr[i]);
                v.push_back(pq.top());
                pq.pop();
                pq.push(arr[i]);
        }   
            
        //sort(v.begin(),v.end());
        while(pq.empty()==false)
        {
            v.push_back(pq.top());
            pq.pop();
        }
        return v;
    }
};
