//https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/
class Solution {
public:
    int maxScore(vector<int>& car, int k) {
        int sum=0,res=0;
        for(int i: car)
        {
            sum+=i;
        }
        int ans=0,win=0;
        int n=car.size();
        if(n==k)return sum;
        for(int i=0;i<n-k-1;i++)
        {
            win+=car[i];
        }
        for(int i=n-k-1;i<n;i++)
        {
            win+=car[i];
            res=max(res,sum-win);
            win-=car[i-(n-k-1)];
        }
        return res;
    }
};
