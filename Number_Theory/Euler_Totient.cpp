//Euler’s Totient Function
/*count of numbers in {1, 2, 3, …, n} that are relatively prime to n, i.e.,
the numbers whose GCD (Greatest Common Divisor) with n is 1.
Example:- Φ(5) = 4
gcd(1, 5) is 1, gcd(2, 5) is 1, 
gcd(3, 5) is 1 and gcd(4, 5) is 1
*/
//simple method
#include <bits/stdc++.h>

using namespace std;
int gcd(int a,int b){
    return (b==0)?a:gcd(b,a%b);
}
int phi(unsigned int n){
    unsigned int res=1;
    for(int i=2;i<n;i++){
        if(gcd(i,n)==1)
        res++;
        
    }
    return res;
}
int main(){
    int n;
    for(n=1;n<=10;n++){
        cout<<"ph("<<n<<")= "<<phi(n)<<endl;
    }
    return 0;
}
