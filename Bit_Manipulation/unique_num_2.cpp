/*
We are given an array containg n numbers. All the numbers are present twice except for two numbers which are present only once. 
Find the unique numbers in linear time without using any extra space. ( Hint - Use Bitwise )

input:  First line contains the number n. Second line contains n space separated number.
4
3 1 2 1
output: 
2 3

*/
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];
	int num,res=0;
	for(int i=0;i<n;i++)
	{
		cin>>num;
        a[i]=num;
		res=res^num;
	}
	
	int temp=res;

	int pos=0;
	while((temp&1)==0)
	{
		//position for mask
        pos++;
		temp=temp>>1;
    }
	//mask
	int mask=(1<<pos);
    // finding numbers which have set bit at position pos
    int x=0;
    int y=0;
	for(int i=0;i<n;i++)
	{
		if((a[i]&mask)>0)
		{
			x=x^a[i];
		}
	}
    y=res^x;
	cout<<min(x,y)<<" "<<max(x,y)<<endl;
	return 0;
}
