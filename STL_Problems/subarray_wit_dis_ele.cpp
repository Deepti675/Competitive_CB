/*
Problem Name: Subarrays with distinct elements
Problem Difficulty: None
Problem Constraints: 1<=N<=10^5
Problem Description:
Given an array, the task is to calculate the sum of lengths of contiguous subarrays having all elements distinct

Input Format: An integer n denoting size of array followed by n integers
Sample Input: 3
1 2 3
Output Format: The answer mod 10^9+7
Sample Output: 10

*/
//Set solution
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   int len,sum=0;
    for(int i=0;i<n;i++)
    {
        unordered_set<int>s;
        int j=i;
        while(j<n&&s.find(a[j])==s.end())
        {
            s.insert(a[j]);
            j++;
        }
        sum+=((j-i)*(j-i+1))/2;
        s.erase(a[i]);
        
    }
    cout<<sum;
    
    return 0;
}

//map sol
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
int arr[n];
for(int i=0;i<n;i++) cin>>arr[i];
long long int cnt=0;
for(int i=0;i<n;i++)
{
    map<int,bool> m;
    long long int p=0;
    for(int j=i;j<n;j++)
    {
        if(!m[arr[j]])
        {
           p= (p+1)%1000000007;
            m[arr[j]]= true;
        }
    }
    cnt+= ((p*(p+1))/2)%1000000007;
}
cout<<cnt%1000000007;

    return 0;
}
