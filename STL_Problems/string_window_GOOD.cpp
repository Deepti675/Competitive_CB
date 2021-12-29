/*
Problem Name: String Window
Problem Difficulty: 3
Problem Constraints: Length of both the strings can be at max 10^4
Problem Description:
Ravi has been given two strings named string1 and string 2. He is supposed to find the minimum length substring of the string1 which contains all the 
characters of string2. Help him to find the substring

Input Format: The first line of the input contains string1. String1 can be a string containing spaces also.
The second line of the input contains string2. String2 can be a string containing spaces also.
Sample Input: qwerty asdfgh qazxsw
qas
Output Format: Output the substring in a single line. If no such substring exist then output "No String" without quotes
Sample Output: qazxs

*/
#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s,t;
    //cin ends when it sees a next line and space so we need space in our string so we will use getline for taking input string
    
    getline(cin,s);
    //cout<<s;
    getline(cin,t);
    int n=s.size();
    int m=t.size();
    //two pointer technique
    int l=0,r;
    int res_l=-1,res_r=1e9;
    map<char,int>freq_s,freq_t;
    //freq of string t
    for(auto x:t){
        freq_t[x]++;
    }
    for(int r=0;r<n;r++)
    {
        //i have to check whether string from l to r is a good string
        freq_s[s[r]]++;
        bool good=true;
        for(auto x: freq_t)
        {
            //x is {char,int}
            if(freq_s.count(x.first)==0||freq_s[x.first]<x.second)
            {
                good=false;
                break;
            }
        }
        //string window from l to r is not good
        if(!good)continue;
        //otherwise it is a good window
        //move l forward part for every r part
                            //in freq_t.count(s[l]==0)means char is not present in t
        while(l<n&&l<=r&& (freq_t.count(s[l])==0 || freq_s[s[l]]>freq_t[s[l]]))
        {
            freq_s[s[l]]--;
            if(freq_s[s[l]]==0)
            freq_s.erase(s[l]);//if it will not remove than the char will always present in map with frequency zero thats why i erase it
            l++;
        }
        //cout<<l<<" "<<r<<endl;
        //for taking only smallest window lets take the minimum of all
        
        if(res_r-res_l+1>r-l+1)
        {
            res_l=l;
            res_r=r; 
        }
    }
   // cout<<res_l<<" "<<res_r<<endl;
    if(res_l==-1)
    cout<<"No String"<<endl;
    else
    cout<<s.substr(res_l,res_r-res_l+1);
    //total time complexity O(m+n+log(256)) m=length of second string, n=length of first string, and 256 are total char in map
}
