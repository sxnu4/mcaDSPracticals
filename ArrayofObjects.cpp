#include<bits/stdc++.h>
using namespace std;

class Student
{
  int roll;
  char name[30];
  char course[30];
  char dept[30];
  
  
  public:
  void getdata();//Declaration of function
  void putdata();//Declaration of function
};
void Student::getdata(){//Defining of function
  cout<<"Enter Roll number : ";
  cin>>roll;
  cout<<"Enter Student's Name : ";
  cin>>name;
  cout<<"Enter Course Name : ";
  cin>>course;
  cout<<"Enter Department Name : ";
  cin>>dept;
  
}
void Student::putdata(){//Defining of function
  cout<<"**************************************";
  cout<<"\n* Roll number of Student: "<<roll<<" ";
  cout<<"\n* Name of Student: "<<name<<" ";
  cout<<"\n* Course name of Student: "<<course<<" ";
  cout<<"\n* Department name of Student: "<<dept<<" ";
  cout<<"\n**************************************";
  cout<<endl;
}
int main(){
  int n;
  cout<<"Enter the number of students: ";
  cin>>n;
  Student stt; //One member 
  for(int i=0;i<n;i++){
    
  stt.getdata();//Accessing the function
  }
  stt.putdata();//Accessing the function
  return 0;

}
