




























#include<iostream>
#include<cstring>
using namespace std;
class student
{
	private:
		static string name;
		static int age;
	public:
		student()
		{
			name="";
			age=0;
		}
	    student(string n,int a)
		{
			name=n;
			age=a;
		}	
		student(student&s)
		{
			name=s.name;
			age=s.age;
		}
		static void display()
		{
			cout<<"-------student detail-----"<<endl;
			cout<<"name of student:"<<name<<endl;
			cout<<"age:"<<age<<endl;
		}
};
int main()
{
	student s1;
	cout<<"default constructor is called here"<<endl;
	s1.display();
	student s2("sara",29);
	cout<<"copy constructor is called"<<endl;
	s2.display();
	student s3=s1;
	s3.display();
	student s4=s2;
	s4.display();
	student::display();
	return 0;
}
