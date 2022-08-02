https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/

//using min heap
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue <int, vector<int>, greater<int>> pq ;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++){
                pq.push(matrix[i][j]);
            }
        }
        while(k>1){
            pq.pop();
                k--;
        }
        return pq.top();
    }
};

//using max heap
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> pq ;        
       
        for(int i = 0;i< matrix.size();i++)
        {
            for(int j = 0 ; j< matrix[i].size();j++)
            {
                pq.push(matrix[i][j]);

                if(pq.size()> k)
                {
                    pq.pop();
                }
            }
            
        }
            return pq.top();
    }
};
