#include<iostream> 
using namespace std; 
class Student{ 
 public: 
 string name; 
 int rollnum; 
 float cgpa; 
 char div; 
 string branch; 
 
 void getData(){ 
 cout<<"---------------------------\nEnter Name:"<<endl; 
 cin>>name; 
 cout<<"Enter Roll Number:"<<endl; 
 cin>>rollnum; 
 cout<<"Enter CGPA:"<<endl; 
 cin>>cgpa; 
 cout<<"Enter Div:"<<endl; 
 cin>>div; 
 cout<<"Enter Branch:"<<endl; 
 cin>>branch; 

 } 
 
 void printData(){ 
 cout<<"Name: "<<name<<endl; 
 cout<<"Roll number: "<<rollnum<<endl; 
 cout<<"CGPA : "<<cgpa<<endl; 
 cout<<"Div: "<<div<<endl; 
 cout<<"Branch: "<<branch<<endl; 
 } 
}; 
 
 int main() 
 { 
 Student s1,s2; 
 s1.getData(); 
 s1.printData(); 
 s2.getData(); 
 s2.printData(); 
 return 0; 
 } 
