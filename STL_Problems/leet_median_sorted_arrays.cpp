/*
leet code problem
median of two sorted array of diffrent size
method is using binary search in adiffrent way
*/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {   
        int n=a.size();
        int m=b.size();
        if(n>m)
            return findMedianSortedArrays(b,a);
        int begin1=0;
        int end1=n;
        while(begin1<=end1)
        {
            int i1=(begin1+end1)/2;
            int i2=(n+m+1)/2-i1;
            int min1=(i1==n)?INT_MAX:a[i1];
            int max1=(i1==0)?INT_MIN:a[i1-1];
            int min2=(i2==m)?INT_MAX:b[i2];
            int max2=(i2==0)?INT_MIN:b[i2-1];
            if((max1<=min2)&&(max2<=min1))
            {
                if((n+m)%2==0)
                    return ((double)(max(max1,max2)+min(min1,min2))/2);
                else
                    return ((double)max(max1,max2));
            }
            if(max1>min2)
                end1=i1-1;
            else
                begin1=i1+1;
                
        }
        return 0.0;
       
    }
};
