https://leetcode.com/problems/maximum-units-on-a-truck/
class Solution {
public:
    int maximumUnits(vector<vector<int>>& box, int tr) {
        priority_queue<pair<int,int>>p;int count=0,val=0;
        //use priority queue default way of sorting by first parameter
        for(vector<int>it: box)
        {
            p.push({it[1],it[0]});
        }
        while(!p.empty()&& count<tr)
        {
            if(count+p.top().second<tr)
            {
                count+=p.top().second;
                val+=p.top().second*p.top().first;
                p.pop();
            }
            else
            {
                int m=tr-count;
                count+=m;
                val+=m*p.top().first;
                p.pop();
            }
        }
        return val;
    }
    
};
