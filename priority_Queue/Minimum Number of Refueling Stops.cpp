https://leetcode.com/problems/minimum-number-of-refueling-stops/
class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int reach= startFuel;
        int count=0;
        int idx=0;
        priority_queue<int>pq;
        while(reach<target){
            while(idx<stations.size() && stations[idx][0]<=reach){
                //storing fuel provided by gas station in our priority queue
                
                pq.push(stations[idx][1]);
                idx++;
            }
            if(pq.empty())return -1;
            reach+=pq.top();
            pq.pop();
            count++;
        }
        return count;
    }
};
