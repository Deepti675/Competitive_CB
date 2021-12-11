
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[]={1,10,20,56,110};
    int n=sizeof(a)/sizeof(int);
    //search for a element using find function 
    int key;
    cin>>key;
  // finding function for finding key in an array.....
    auto it=find(a,a+n,key);//it will contain the address of that perticular key.
    int index=it-a;//now we are subtracting the address with base address and get the index of key
    if(index==n)
    cout<<key<<"is not present "<<endl;
    else
    cout<<"key present at index : "<<index;
    
    return 0;
}
