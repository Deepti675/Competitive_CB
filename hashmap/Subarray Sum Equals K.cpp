class Solution {
public:
    int subarraySum(vector<int>&A, int k) {
    
	int i = 0, j = 0,sum=0,c=0;

	    
        map<int,int>mpp;
        for(int i=0;i<A.size();i++)
        {
            sum+=A[i];
        
        if(sum==k)
            c++;
        if(mpp[sum-k]!=0)
            c+=mpp[sum-k];
        mpp[sum]++;
        }
        return c;
}

};
