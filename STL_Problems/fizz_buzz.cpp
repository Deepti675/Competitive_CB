//checking good coder with the help of for modulo only
//Fizz and Buzz
//1. with the modulo operator
#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=100;i++)
    {
        string d="";
        if(i%3==0)
        {
        d+="fizz";
        }
        if(i%5==0)
        {
        d+="buzz";
        }
        if(d=="")
        {
        cout<<i<<"\n";
        }
        else
        {
            cout<<d<<"\n";
        }
    }
    return 0;
}
//2.without modulo operator
//Fizz and Buzz
#include <iostream>

using namespace std;

int main()
{
    int c3 =0;
    int c5 =0;
    
    for(int i=1;i<=100;i++)
    {
        string d="";
        c3++;
        c5++;
        if(c3==3)
        {
            d+="fizz";
            c3=0;
        }
        if(c5==5)
        {
            d+="buzz";
            c5=0;
        }
               if(d=="")
        {
        cout<<i<<"\n";
        }
        else
        {
            cout<<d<<"\n";
        }
    }
    return 0;
}
