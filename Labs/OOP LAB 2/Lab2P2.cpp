#include<iostream>
#include<string>
using namespace std;
class Date{
	private:
	int day,month,year;
	public:
		void setDate(int d, int m, int y){
			day=d;
			month=m;
			year=y;
}
			void print();
	
};

void Date::print(){
	cout<<"Date:"<<day<<":"<<month<<":"<<year<<endl;
}
int main(){
	Date d1;
	d1.setDate(10,11,2024);
	
	
	d1.print();
	
	
	
}
