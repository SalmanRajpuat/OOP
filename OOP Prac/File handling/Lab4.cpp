#include <iostream>
#include<string>
using namespace std;
 class Person{
 	int id;
 	public:
 		void setId(int id)
 		{
 			this->id=id;
		 }
		 
		void getId()
		{
			return id;
		}
		 
 };
  class Student:public Person{
  	double gpa;
  	public:
  		void setGpa(double Gpa)
 		{
 			gpa=Gpa;
		 }
		 
		void getGpa()
		{
			return gpa;
		}
  		
  };
 
 
 
 
int main() {
  
  Student s1;
  s1.setId(30);
  s1.setGpa(3.0);
  
  cout<<s1.getGpa();
  cout<<s1.getId();
  
    return 0;
}
