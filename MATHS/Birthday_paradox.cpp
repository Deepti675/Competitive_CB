//Birthday Paradox Problem
//How many people should present in the room so that 2 people have same birthday with probability p
#include<iostream>
using namespace std;
int main()
{
       float x=1.0;//let initially the prob is 100%
       int people=0;
       float num=365;
       float denom=365;
       float p;
       cin>>p;
       while(x>1-p)
       {
           x=x*(num)/denom;
           num--;
           people++;
           cout<<"people "<<people<<" and probability "<<x<<endl;
       }
       return 0;
       
}
