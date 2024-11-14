#include <iostream>
#include<string>
using namespace std;
 class Employee{
 private:
 string name;
 int identity_no;
 int age,salary;
	public:
		
		
	void enterData(){
		cout<<"Enter your name:";
		cin>>name;
		cout<<"Enter your identity_No";
		cin>>identity_no;
		cout<<"Enter age:";
		cin>>age;
		cout<<"Enter your salary:";
		cin>>salary;
			
	}
	
	void displayData(){
		cout<<"\nDisplaying your data here:";
		cout<<" \n\nyour name:"<<name<<endl;
		
		cout<<" your identity_No:"<<identity_no<<endl;
		
		cout<<" age:"<<age<<endl;
		
		cout<<" your salary:"<<salary<<endl;
	
	}	
 };
 
 class Engineer :public Employee{
 	string designation;
 	public:
 	enterData()
 	{
 		Employee::enterData();//overridden
 		cout<<"Enter your designation:";
 		cin>>designation;
	}
	void displayData(){
		Employee::displayData();
		cout<<"\n Your designation is:"<<designation<<endl;
	
	}	
 	
 		
 };
 
 
 
int main() {
  
  Engineer A;
  A.enterData();
  A.displayData();
  
  
  
    return 0;
}
