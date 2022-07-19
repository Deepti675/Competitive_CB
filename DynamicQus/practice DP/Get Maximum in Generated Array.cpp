https://leetcode.com/problems/get-maximum-in-generated-array/
class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int>arr(n+1,0);
        int maxi=INT_MIN;
        if(n==0||n==1)return n;
        
        arr[1]=1;
        for(int i=2;i<n+1;i++){
            if(i%2==0)
                arr[i]=(arr[i/2]);
            else
                arr[i]=(arr[i/2]+arr[i-i/2]);
            maxi=max(maxi,arr[i]);
        }
        return maxi;
    }
};
