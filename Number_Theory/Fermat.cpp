#include <bits/stdc++.h>

using namespace std;
/*
#Use of Fermat’s little theorem
If we know m is prime, then we can also use Fermat’s little theorem to find the inverse (a^-1).

Here p is a prime number 
a^p ≡ a (mod p).
a^p-1 ≡ 1 (mod p) 
OR 
a^p-1 % p = 1 
        a^-1 ≡ a^m-2 (mod m) 

Here a is not divisible by p.
*/
int power(int x, unsigned int y,unsigned int m){
    if(y==0)
    return 1;
    int p=power(x,y/2,m)%m;
    p=(p*p)%m;
    return (y%2==0)?p:(x*p)%m;
}
void modInv(int a,int m){
    if(__gcd(a,m)!=1){
        cout<<"Inverse does not Exist "<<endl;
    }
    else
    {
        cout<<"Modulo multiplicative inverse is :"<<power(a,m-2,m)<<endl;
        
    }
}
int main()
{
    int a,m;
    cin>>a>>m;
    modInv(a,m);

    return 0;
}
