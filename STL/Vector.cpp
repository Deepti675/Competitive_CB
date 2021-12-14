//////////////////////////////////////VECTOR////////////////////////////////////////////////


int main()
{
    vector<int>a;
    vector<int>b(5,10);// five int with value 10 //usefull when you want to initialize a vector with zeros (n,0)
    vector<int>c(b.begin(),b.end());
    
    //look at how we can iterate over the vector
    for(int i=0;i<c.size();i++)
    cout<<c[i]<<",";
    cout<<endl;
    for(auto it =b.begin();it!=b.end();it++)
    cout<<(*it)<<",";
    cout<<endl;
    //look at how we can iterate over the vector another way 
    //for each loop
    vector<int>d{3,2,5,4,5};
    for(int i:d)
    {
        cout<<i<<",";
    }
    cout<<endl;
    //discuss some more functions
    vector<int>v1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        v1.push_back(num);//adds element to the end of the vector//in push back doubling of memory happening
    }
    for(int c:v1)
    {
        cout<<c<<",";
    
    }
    cout<<endl;
    //understand at memory level, what are the differences in the two
    cout<<v1.size()<<endl;
    cout<<v1.capacity()<<endl;//size of the underlying array
    cout<<v1.max_size()<<endl;//maximum number of emelemnt vector can hold in worst case acc to the available mamemory in the system
    
    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;//size of the underlying array
    cout<<d.max_size()<<endl;//maximum number of emelemnt vector can hold in worst case acc to the available mamemory in the system
    //insert element in middle
    vector<int>y{23,34,51,6,7,8};
    y.push_back(19);
    y.insert(y.begin()+3,4,100); 
    for(int x:y)
    {
        cout<<x<<",";
    }
    cout<<endl;
    //erase some element from middle
    y.erase(y.begin()+2);
    for(int x:y)
    {
        cout<<x<<",";
    }
    cout<<endl;
    y.erase(y.begin()+2,y.begin()+5);
    for(int x:y)
    {
        cout<<x<<",";
    }
    cout<<endl;
    //remove all the vector, this does not delete the memory occupied by the array
    y.clear();
    cout<<"Now size is :"<<y.size()<<endl;
    //empty 
    if(y.empty())
    {
        cout<<"this is an empty vector"<<endl;
    }
    y.push_back(10);
    y.push_back(9);
    y.push_back(12);
    cout<<y.front()<<endl;
    cout<<y.back()<<endl;
    //reserve
   /* int nn;
    cin>>nn;
    vector<int>vv;
    //in this process of inserting element doubling in memeory occure so it is an expensive operation
    for(int i=0;i<nn;i++)
    {
        //time taking operation
        int no;
        cin>>no;
        vv.push_back(no);
        cout<<"changing capacity"<<vv.capacity()<<endl;
    }
    for(int x:vv){
        cout<<x<<",";
    }*/
    //to avoid doubling we will use reserve functions
    int nn;
    cin>>nn;
    vector<int>vv;
    vv.reserve(1000);
    for(int i=0;i<nn;i++)
    {
        int no;
        cin>>no;
        vv.push_back(no);
        //with the help of this capacity will alwats be 1000
        cout<<"changing capacity"<<vv.capacity()<<endl;
    }
    for(int x:vv){
        cout<<x<<",";
    }
 return 0;   
}
