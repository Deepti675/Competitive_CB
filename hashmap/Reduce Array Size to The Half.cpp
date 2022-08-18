https://leetcode.com/problems/reduce-array-size-to-the-half/
class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        int count=0,sum=n;
        map<int,int>mpp;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        multimap<int,int,greater<int>>mm;
        for(auto it:mpp){
            mm.insert({it.second,it.first});
        }
        for(auto it=mm.begin();it!=mm.end();it++){
            sum-=it->first;
            count++;
            if(sum<=n/2)
                return count;
        }
        return count;
    }
};
