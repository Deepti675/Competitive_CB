//Euler’s Totient Function
/*count of numbers in {1, 2, 3, …, n} that are relatively prime to n, i.e.,
the numbers whose GCD (Greatest Common Divisor) with n is 1.
Example:- Φ(5) = 4
gcd(1, 5) is 1, gcd(2, 5) is 1, 
gcd(3, 5) is 1 and gcd(4, 5) is 1
*/
//Euler product formula= n*(1-1/p) method 
#include <bits/stdc++.h>
using namespace std;
int phi(int n){
    float res=n;
    for(int p=2;p*p<=n;++p){
        if(n%p==0){
            while(n%p==0)
            n/=p;
            res*=(1.0-(1.0/(float)p));
        }
    }
    if(n>1)
    res*=(1.0-(1.0/(float)n));
return (int)res;    
}
int main(){
    int n;
    for(n=1;n<=10;n++){
        cout<<"phi("<<n<<")"<<"="<<phi(n)<<endl;
    }
    return 0;
}
