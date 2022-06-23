//https://leetcode.com/problems/course-schedule-iii/
class Solution {
public:
    struct compare{
        bool operator()(const vector<int>&i,const vector<int>&j)
        {
            return i[1]<j[1];
        }
    };
    int scheduleCourse(vector<vector<int>>& c) {
        sort(c.begin(),c.end(),compare());
        priority_queue<int>pq;
        int tot_dur=0;
        for(int i=0;i<c.size();i++)
        {
            int curr=c[i][0];
            int nn=c[i][1];
            tot_dur=curr+tot_dur;
            pq.push(curr);
            if(tot_dur>nn)
            {
                tot_dur-=pq.top();
                pq.pop();   
            }
        }
        return pq.size();
    }
};
