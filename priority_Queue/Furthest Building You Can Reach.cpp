class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        int n=h.size();
        int i;
        priority_queue<int>pq;
        for(i=0;i<n-1;i++)
        {
         int diff=h[i+1]-h[i];
         if(diff<0)
             continue;
         else
         {
             if(diff<=b)
             {
                 b-=diff;
                 pq.push(diff);
             }
             else if(l>0)
             {
                 if(pq.size())
                 {
                     int curr=pq.top();
                     if(curr>diff)
                     {
                         b+=curr;
                         pq.pop();
                         pq.push(diff);
                         b-=diff;
                     }
                 }
                 l--;
             }
             else
                 return i;
         }
        }
      return i;  
    }
};
