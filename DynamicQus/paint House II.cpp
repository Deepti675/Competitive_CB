https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/paint-house-many-colors-official/ojquestion
#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int main()
{
  int n ;
  cin >> n ;
  int k ;
  cin >> k ;
  //write your code from here
  int arr[n][k];
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<k;j++)
      {
          cin>>arr[i][j];
      }
  }
  int dp[n][k];
  for(int j=0;j<k;j++){
      dp[0][j]=arr[0][j];
  }
  for(int i=1;i<n;i++){
      for(int j=0;j<k;j++){
          int mini=INT_MAX;
           for(int m=0;m<k;m++){
               if(m!=j){
                   if(dp[i-1][m]<mini)
                     mini=dp[i-1][m];
               }
           }
           dp[i][j]=arr[i][j]+mini;
      }
  }
  int mini=INT_MAX;
           for(int m=0;m<k;m++){
               
                   if(dp[n-1][m]<mini)
                     mini=dp[n-1][m];
               
           }
           cout<<mini;
}
