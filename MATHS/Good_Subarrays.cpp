//Good Subarrays or Divisible Subarray    

//  (link of problem --> https://hack.codingblocks.com/app/practice/3/1065/problem)

//good subarray are those subarrays which sum of elements are divisible by size are array
//using brute force TLE will come because size of N is very large 
//So we will use pigeonhole priciple(atleast one hole will contain atleast two pigeon)
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[1000005],pre[1000005];
int main() {
    int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		memset(pre,0,sizeof(pre));
		pre[0]=1;
		//read the input
		ll sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
            sum+=a[i];
			sum%=n;
			sum=(sum+n)%n;
			pre[sum]++;
		}
		ll ans=0;
		for(int i=0;i<n;i++)
		{
			ll m=pre[i];
			ans+=(m)*(m-1)/2;//nc2 work here

		}
		cout<<ans<<endl;

	}
	return 0;
}
