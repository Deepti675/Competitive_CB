/*
@csalgo

Problem Name: Unlock
Problem Difficulty: 2
Problem Constraints: 1 <= n <= 10^5 1<= K <= 10^9
Problem Description:
Shekhar is a bomb defusal specialist. He once encountered a bomb that can be defused only by a secret code.
 He is given a number N and a number K. And he is also given permutation of first N natural numbers . 
The defusal code is the largest permutation possible by doing atmost K swaps among a pair of the given permutation. 
Help him to find the final permutation.

Input Format: First line contains ​an integer N and an integer k. The next line contains N space separated integers denoting the given permutation.
Sample Input: 5 2
3 4 1 2 5
Output Format: The final permutation of the numbers with every number separated by a space with other number.
Sample Output: 5 4 3 2 1




*/

#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*b;
    *b=*a;
    *a=temp;
}
int main()
{
    long long int n,k;
    cin>>n>>k;
    int a[n];
    map<int,int>mp;
    for(long long int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]=i;
    }
    //for(auto x:mp)
    //cout<<x.first<<":"<<x.second<<endl;
    for(long long int i=0;i<n;i++)
    {
        if(k<=0)
        break;
        if(a[i]==n-i)
        continue;
        int h=n-i;
        int pos=mp[h];
        mp[a[i]]=pos;
        mp[a[pos]]=i;
        swap(a[i],a[pos]);
        k--;
    }
    //for(auto x:mp)
    //cout<<x.first<<":"<<x.second<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
