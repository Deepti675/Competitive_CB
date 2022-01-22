#include <iostream>
using namespace std;
int EuclideanGCD(int a,int b)
{
    if(b==0){
        return a;
    }
    return EuclideanGCD(b,a%b);
}
int lcm(int a,int b){
    return a*b/EuclideanGCD(a,b);
}
int x,y,GCD;
void extendedEuclideanGCD(int a,int b){
    if(b==0){
        x=1;
        y=0;
        GCD=a;
        return;
    }
    extendedEuclideanGCD(b,a%b);//now we will solve in bottom up fashion
    int cX=y;
    int cY=x-(a/b)*y;
    cout<<cX<<","<<cY<<endl;
    x=cX;
    y=cY;
    
}
int main()
{
    cout<<EuclideanGCD(10,15)<<endl;
    cout<<EuclideanGCD(100,10)<<endl;
    extendedEuclideanGCD(18,30);
    cout<<x<<","<<y<<endl;
    return 0;
}
