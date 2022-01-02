/*
We are given an array containg n numbers. All the numbers are present thrice except for one number which is only present once.
Find the unique number. Only use - bitwise operators, and no extra space.
input: 
7
1 1 1 2 2 2 3
output:
3
*/
#include<iostream>
using namespace std;
int main() {
	int cnt[64]={0};
	int n,num;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>num;
		//update the cnt array by extrecting bits
	    int j=0;
	while(num>0)
	{

		int last_bit= (num&1);
		cnt[j]+= last_bit;
		j++;
		num= num>>1;
        
	}
	}
	int p=1;
	int ans=0;
	//iterate over the array and form the ans by converting binary to decimal
	for(int i=0;i<64;i++)
	{
        cnt[i]%=3;
		ans+=(cnt[i]*p);
		p=p<<1;
	}
	cout<<ans<<endl;
	return 0;
}
