////////////////////////////////////STRING/////////////////////////////////////////////

//1*******************************String Sorting**********************************************
bool compare(string a,string b)
{
    //if two string have same length the print one which is lexeographically smaller then print another
    if(a.length()==b.length())
    return a<b;
    else
    return a.length()>b.length();
}
int main()
{
    int n;
    cin>>n;
    cin.get();
    string s[100];
    for(int i=0;i<n;i++)
    {
        getline(cin,s[i]);
    }
    sort(s,s+n,compare);
    cout<<"\n";
    for(int j=0;j<n;j++)
    {
        
        cout<<s[j]<<endl;
    }
    return 0;
}


//2.************************String Tokinizer*************************


//divide the string in to tokens
//char *strtok(char *s,char *deliniters)
//return the token on each subsequent call
//on the first call function should passed with string argument for 's'
//on subsequent call we should pass the string argument as NULL
int main()
{
    char s[100]="mmmmm am deepti gupta";
    char *ptr=strtok(s," ");
    cout<<ptr<<endl;
    while(ptr!=NULL)
    {
      ptr=strtok(NULL," ");
    cout<<ptr<<endl;  
    }
    return 0;
}
