#include<iostream>
#include<string>
using namespace std;
class Circle{
	private:
		double radius;
	public:
		Circle();
		~Circle();
	};
		
Circle::Circle():radius(0.0){
	cout<<"The constructor has been called"<<endl;
}

Circle::~Circle(){
	cout<<"The destructor has been called with radius:"<<radius<<endl;
}
		
		

int main(){
	Circle A1;
	
	
	
	
	
}
