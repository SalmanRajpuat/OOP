#include <iostream>
#include<string>
using namespace std;
 class Rectangle{
 private:
 int length;
	int breadth;
	public:
		rectangle()
		{
			breadth =0;
			length = 0;	
		}
		rectangle(double len, double wid)
		{
			length = len;
			breadth = wid;
		}
 		
 };
 
 
 
int main() {
  int length, breadth;
  cout<<"Enter the length of :";
  cin>>length;
  	cout<<"Enter the breadth :";
  	cin>>breadth;
  	
  	Rectangle A(length, breadth);
    return 0;
}
