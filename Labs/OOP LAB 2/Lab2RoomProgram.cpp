#include<iostream>
#include<string>
using namespace std;
class Room{
	public:
	double length,breadth,height;
	
		double area(){
			return length*breadth;
			
}
			double volume(){
			return length*breadth*height;
		}
	
};

int main(){
	Room room;
	room.length = 20.1;
	room.breadth= 10.5;
	room.height = 5;
	
	cout<<room.area()<<endl;
	
	cout<<room.volume();
	
	
	
	
	
}
