#include<bits/stdc++.h>
using namespace std;
class student{
  public:
  string firstname;
  string lastname;
  string rollno;
  student(string f,string l,string r)
  {
      firstname=f;
      lastname=l;
      rollno=r;
  }
  bool operator==(const student &s)const{
  
    return rollno == s.rollno?true:false;
  }
};
class HashFun{
  public:
  //size_t is unsigned int type data type
  size_t operator()(const student &s)const{
      return s.firstname.length()+s.lastname.length();  
  }
};
int main()
{
    unordered_map<student,int,HashFun>student_map;
    student s1("prateek","narang","010");
    student s2("Rahul","Kumar","023");
    student s3("Prateek","Gupta","030");
    student s4("rahul","kumar","120");
    //add student and marks to hashmap
    student_map[s1]=100;
    student_map[s2]=120;
    student_map[s3]=11;
    student_map[s4]=45;
    //iterate over all student_map
    for(auto s:student_map)
    {
        cout<<s.first.firstname<<" "<<s.first.rollno<<" Marks "<<s.second<<endl;
    }
    //find the marks of student s3
    cout<<student_map[s3]<<endl;
    return 0;
}













