/*finding the median of two sorted array of same length
methods 
1.brute force
combine both the array and sort tham after that middle element is median
time com=O(nlog(n))
2.Binary Search
on the left of median all the element is smaller and on the right all the element are greater 
so using binary search this funda will use without combining both the arrays
time complexity =O(log(n))
algo--->
partition X + partition Y= (X+Y+1)/2
found:
   maxLeft X<= minRight Y
   maxLeft Y<= minRight X
else if
   maxLeft X > minRight Y
   move toward left in X
else
   move toward right in X
*/
#include <bits/stdc++.h>

using namespace std;
int find_median(int a[],int b[],int n)
{
    int begin1=0;
    int end1=n-1;
    while(begin1<=end1)
    {
        int i1=(begin1+end1)/2;
        int i2=(n+n+1)/2-i1;
        int min1=(i1==n)?INT_MAX:a[i1];
        int max1=(i1==0)?INT_MIN:a[i1-1];
        int min2=(i1==n)?INT_MAX:b[i2];
        int max2=(i1==0)?INT_MIN:b[i2-1];
        if((max1<=min2)&&(max2<=min1))
        {
            if((n+n)%2==0)
            {
                return ((double)(max(max1,max2)+min(min1,min2))/2);
            }
            else
            return((double)max(max1,max2));
        }
        else if(max1>min2)
        end1=i1-1;
        else
        begin1=i1+1;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    cout<<find_median(a,b,n);
    return 0;
}
