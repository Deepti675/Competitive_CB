https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mini=p[0];
        int profit=0;
        int cost;
        for(int i=1;i<p.size();i++)
        {
            cost=p[i]-mini;
            profit=max(profit,cost);
            mini=min(mini,p[i]);
        }
        return profit;
    }
};
