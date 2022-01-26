/*chainese remainder theorem
x =  ( ∑ (rem[i]*pp[i]*inv[i]) ) % prod
   Where 0 <= i <= n-1

rem[i] is given array of remainders

prod is product of all given numbers
prod = num[0] * num[1] * ... * num[k-1]

pp[i] is product of all divided by num[i]
pp[i] = prod / num[i]

inv[i] = Modular Multiplicative Inverse of 
         pp[i] with respect to num[i]
*/
//formula method
#include<bits/stdc++.h>
using namespace std;
int inv(int a,int m){
    int m0=m,t,q;
    int x0=0,x1=1;
    if(m==1)
     return 0;
    while(a>1){
        q=a/m;
        t=m;
        m=a%m,a=t;
        t=x0;
        x0=x1-q*x0;
        x1=t;
        
    } 
    if(x1<0)
    x1+=m0;
    return x1;
}
int findMinX(int num[],int rem[],int k){
    int prod=1;
    for(int i=0;i<k;i++){
        prod*=num[i];
        
    }
    int res=0;
    for(int i=0;i<k;i++){
        int pp=prod/num[i];
        res+=rem[i]*inv(pp,num[i])*pp;
    }
    return res%prod;
}
int main(){
    int num[]={3,4,5};
    int rem[]={2,3,1};
    int k=sizeof(num)/sizeof(num[0]);
    cout<<"x is "<<findMinX(num,rem,k);
        
        /* code */
        return 0;
}
